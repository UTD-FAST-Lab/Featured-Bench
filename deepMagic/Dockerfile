ARG parent_image
FROM $parent_image

ADD seeds $FUZZ/seeds
ADD deepMagic $FUZZ/deepMagic
RUN chown -R $HOST_USER $FUZZ/deepMagic

USER $HOST_USER
COPY build.sh $FUZZ/
RUN bash $FUZZ/fuzzer_build.sh
ENV BENCHMARK=deepMagicError
ENV FUZZ_TARGET=$FUZZ/deepMagic/deepMagicError
ENV FUZZING_FLAG="@@"
