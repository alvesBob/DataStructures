#!/bin/bash

# URLs dos arquivos para download
urls=(
  "https://icpc.global/worldfinals/problems/2021-ICPC-World-Finals/icpc2021data.zip"
  "https://icpc.global/worldfinals/problems/2020-ICPC-World-Finals/icpc2020data.zip"
  "https://icpc.global/worldfinals/problems/2019-ICPC-World-Finals/icpc2019data.tar.bz2"
  # Adicione mais URLs aqui
)

# Loop para baixar e organizar os arquivos
for url in "${urls[@]}"; do
  # Extrai o ano e o formato do arquivo da URL
  year=$(echo $url | grep -o -E 'icpc[0-9]+' | sed 's/icpc//')
  format=$(echo $url | awk -F. '{print $NF}')

  # Cria o diretório para o ano, se ele não existir
  mkdir -p "acm$year"

  # Baixa o arquivo
  wget -O "acm$year/acm$year.$format" $url

  # Descompacta o arquivo
  if [ "$format" == "zip" ]; then
    unzip "acm$year/acm$year.$format" -d "acm$year/"
  elif [ "$format" == "tar.bz2" ]; then
    tar -xjf "acm$year/acm$year.$format" -C "acm$year/"
  fi

  # Remove o arquivo compactado (opcional)
  rm "acm$year/acm$year.$format"
done
