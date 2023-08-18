
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKirby::status::SpecialN_pre(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  SituationKind SVar7;
  uint uVar8;
  GroundCliffCheckKind GVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  void *pvVar15;
  Fighter *pFVar16;
  L2CValue *pLVar17;
  ulong uVar18;
  BattleObjectModuleAccessor **ppBVar19;
  uint in_stack_fffffffffffffed4;
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lib::L2CValue::L2CValue(aLStack200,0);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_COPY);
  iVar6 = lib::L2CValue::as_integer(aLStack136);
  ppBVar19 = &this->moduleAccessor;
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar19,iVar6);
  lib::L2CValue::L2CValue(aLStack120,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::_L2CValue(aLStack136);
  if ((bVar2 & 1U) == 0) {
    lua2cpp::L2CFighterCommon::sub_status_pre_SpecialNCommon(this);
    lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack136,_FIGHTER_KINETIC_TYPE_UNIQ);
    lib::L2CValue::L2CValue(aLStack152,GROUND_CORRECT_KIND_KEEP);
    lib::L2CValue::L2CValue(aLStack168,GROUND_CLIFF_CHECK_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack184,true);
    lib::L2CValue::L2CValue(aLStack232,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
    lib::L2CValue::L2CValue(aLStack248,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
    lib::L2CValue::L2CValue(aLStack264,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
    lib::L2CValue::L2CValue(aLStack280,0);
    SVar7 = lib::L2CValue::as_integer(aLStack120);
    iVar6 = lib::L2CValue::as_integer(aLStack136);
    uVar8 = lib::L2CValue::as_integer(aLStack152);
    GVar9 = lib::L2CValue::as_integer(aLStack168);
    bVar1 = lib::L2CValue::as_bool(aLStack184);
    iVar13 = lib::L2CValue::as_integer(aLStack232);
    iVar10 = lib::L2CValue::as_integer(aLStack248);
    iVar11 = lib::L2CValue::as_integer(aLStack264);
    lib::L2CValue::as_integer(aLStack280);
    app::lua_bind::StatusModule__init_settings_impl
              (*ppBVar19,SVar7,iVar6,uVar8,GVar9,(bool)(bVar1 & 1),iVar13,iVar10,iVar11,
               in_stack_fffffffffffffed4);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,false);
    lib::L2CValue::L2CValue(aLStack136,_FIGHTER_TREADED_KIND_NO_REAC);
    lib::L2CValue::L2CValue(aLStack152,false);
    lib::L2CValue::L2CValue(aLStack168,false);
    lib::L2CValue::L2CValue(aLStack184,false);
    lib::L2CValue::L2CValue(aLStack232,_FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_KEEP);
    lib::L2CValue::L2CValue(aLStack248,_FIGHTER_STATUS_ATTR_START_TURN);
    lib::L2CValue::L2CValue(aLStack264,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_N);
    lib::L2CValue::L2CValue(aLStack280,0);
    bVar1 = lib::L2CValue::as_bool(aLStack120);
    iVar6 = lib::L2CValue::as_integer(aLStack136);
    bVar3 = lib::L2CValue::as_bool(aLStack152);
    bVar4 = lib::L2CValue::as_bool(aLStack168);
    bVar5 = lib::L2CValue::as_bool(aLStack184);
    uVar14 = lib::L2CValue::as_integer(aLStack232);
    uVar8 = lib::L2CValue::as_integer(aLStack248);
    uVar12 = lib::L2CValue::as_integer(aLStack264);
    lib::L2CValue::as_integer(aLStack280);
    app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
              (*ppBVar19,(bool)(bVar1 & 1),iVar6,(bool)(bVar3 & 1),(bool)(bVar4 & 1),
               (bool)(bVar5 & 1),uVar14,uVar8,uVar12,in_stack_fffffffffffffed4);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100237110;
  }
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_COPY_CHARA);
  iVar6 = lib::L2CValue::as_integer(aLStack136);
  iVar6 = app::lua_bind::WorkModule__get_int_impl(*ppBVar19,iVar6);
  lib::L2CValue::L2CValue(aLStack120,iVar6);
  lib::L2CValue::operator_(aLStack200,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_MIIFIGHTER);
  uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((uVar14 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_MIISWORDSMAN);
    uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    if ((uVar14 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIRBY_STATUS_KIND_MIISWORDSMAN_SPECIAL_N);
      iVar6 = lib::L2CValue::as_integer(aLStack120);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar19,iVar6);
      goto LAB_71002370fc;
    }
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_MIIGUNNER);
    uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    if ((uVar14 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_MARIO);
      uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
      lib::L2CValue::_L2CValue(aLStack120);
      if ((uVar14 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_DONKEY);
        uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
        lib::L2CValue::_L2CValue(aLStack120);
        if ((uVar14 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_LINK);
          uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
          lib::L2CValue::_L2CValue(aLStack120);
          if ((uVar14 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_SAMUS);
            uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
            lib::L2CValue::_L2CValue(aLStack120);
            if ((uVar14 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_SAMUSD);
              uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
              lib::L2CValue::_L2CValue(aLStack120);
              if ((uVar14 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_YOSHI);
                uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
                lib::L2CValue::_L2CValue(aLStack120);
                if ((uVar14 & 1) == 0) {
                  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_FOX);
                  uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
                  lib::L2CValue::_L2CValue(aLStack120);
                  if ((uVar14 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_PIKACHU);
                    uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
                    lib::L2CValue::_L2CValue(aLStack120);
                    if ((uVar14 & 1) == 0) {
                      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_PICHU);
                      uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
                      lib::L2CValue::_L2CValue(aLStack120);
                      if ((uVar14 & 1) == 0) {
                        lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_LUIGI);
                        uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
                        lib::L2CValue::_L2CValue(aLStack120);
                        if ((uVar14 & 1) == 0) {
                          lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_CAPTAIN);
                          uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
                          lib::L2CValue::_L2CValue(aLStack120);
                          if ((uVar14 & 1) == 0) {
                            lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_NESS);
                            uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
                            lib::L2CValue::_L2CValue(aLStack120);
                            if ((uVar14 & 1) == 0) {
                              lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_PEACH);
                              uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
                              lib::L2CValue::_L2CValue(aLStack120);
                              if ((uVar14 & 1) == 0) {
                                lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_DAISY);
                                uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
                                lib::L2CValue::_L2CValue(aLStack120);
                                if ((uVar14 & 1) == 0) {
                                  lib::L2CValue::L2CValue(aLStack120,FIGHTER_KIND_KOOPA);
                                  uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
                                  lib::L2CValue::_L2CValue(aLStack120);
                                  if ((uVar14 & 1) == 0) {
                                    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_ZELDA);
                                    uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
                                    lib::L2CValue::_L2CValue(aLStack120);
                                    if ((uVar14 & 1) == 0) {
                                      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_SHEIK);
                                      uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
                                      lib::L2CValue::_L2CValue(aLStack120);
                                      if ((uVar14 & 1) == 0) {
                                        lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_MARTH);
                                        uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
                                        lib::L2CValue::_L2CValue(aLStack120);
                                        if ((uVar14 & 1) == 0) {
                                          lib::L2CValue::L2CValue
                                                    (aLStack120,_FIGHTER_KIND_GAMEWATCH);
                                          uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
                                          lib::L2CValue::_L2CValue(aLStack120);
                                          if ((uVar14 & 1) == 0) {
                                            lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_GANON);
                                            uVar14 = lib::L2CValue::operator__
                                                               (aLStack200,aLStack120);
                                            lib::L2CValue::_L2CValue(aLStack120);
                                            if ((uVar14 & 1) == 0) {
                                              lib::L2CValue::L2CValue
                                                        (aLStack120,_FIGHTER_KIND_FALCO);
                                              uVar14 = lib::L2CValue::operator__
                                                                 (aLStack200,aLStack120);
                                              lib::L2CValue::_L2CValue(aLStack120);
                                              if ((uVar14 & 1) == 0) {
                                                lib::L2CValue::L2CValue
                                                          (aLStack120,_FIGHTER_KIND_WARIO);
                                                uVar14 = lib::L2CValue::operator__
                                                                   (aLStack200,aLStack120);
                                                lib::L2CValue::_L2CValue(aLStack120);
                                                if ((uVar14 & 1) == 0) {
                                                  lib::L2CValue::L2CValue
                                                            (aLStack120,_FIGHTER_KIND_METAKNIGHT);
                                                  uVar14 = lib::L2CValue::operator__
                                                                     (aLStack200,aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  if ((uVar14 & 1) == 0) {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,_FIGHTER_KIND_PIT);
                                                    uVar14 = lib::L2CValue::operator__
                                                                       (aLStack200,aLStack120);
                                                    lib::L2CValue::_L2CValue(aLStack120);
                                                    if ((uVar14 & 1) == 0) {
                                                      lib::L2CValue::L2CValue
                                                                (aLStack120,_FIGHTER_KIND_SZEROSUIT)
                                                      ;
                                                      uVar14 = lib::L2CValue::operator__
                                                                         (aLStack200,aLStack120);
                                                      lib::L2CValue::_L2CValue(aLStack120);
                                                      if ((uVar14 & 1) == 0) {
                                                        lib::L2CValue::L2CValue
                                                                  (aLStack120,_FIGHTER_KIND_PIKMIN);
                                                        uVar14 = lib::L2CValue::operator__
                                                                           (aLStack200,aLStack120);
                                                        lib::L2CValue::_L2CValue(aLStack120);
                                                        if ((uVar14 & 1) == 0) {
                                                          lib::L2CValue::L2CValue
                                                                    (aLStack120,_FIGHTER_KIND_DIDDY)
                                                          ;
                                                          uVar14 = lib::L2CValue::operator__
                                                                             (aLStack200,aLStack120)
                                                          ;
                                                          lib::L2CValue::_L2CValue(aLStack120);
                                                          if ((uVar14 & 1) == 0) {
                                                            lib::L2CValue::L2CValue
                                                                      (aLStack120,
                                                                       _FIGHTER_KIND_DEDEDE);
                                                            uVar14 = lib::L2CValue::operator__
                                                                               (aLStack200,
                                                                                aLStack120);
                                                            lib::L2CValue::_L2CValue(aLStack120);
                                                            if ((uVar14 & 1) == 0) {
                                                              lib::L2CValue::L2CValue
                                                                        (aLStack120,
                                                                         _FIGHTER_KIND_IKE);
                                                              uVar14 = lib::L2CValue::operator__
                                                                                 (aLStack200,
                                                                                  aLStack120);
                                                              lib::L2CValue::_L2CValue(aLStack120);
                                                              if ((uVar14 & 1) == 0) {
                                                                lib::L2CValue::L2CValue
                                                                          (aLStack120,
                                                                           _FIGHTER_KIND_LUCARIO);
                                                                uVar14 = lib::L2CValue::operator__
                                                                                   (aLStack200,
                                                                                    aLStack120);
                                                                lib::L2CValue::_L2CValue(aLStack120)
                                                                ;
                                                                if ((uVar14 & 1) == 0) {
                                                                  lib::L2CValue::L2CValue
                                                                            (aLStack120,
                                                                             _FIGHTER_KIND_ROBOT);
                                                                  uVar14 = lib::L2CValue::operator__
                                                                                     (aLStack200,
                                                                                      aLStack120);
                                                                  lib::L2CValue::_L2CValue
                                                                            (aLStack120);
                                                                  if ((uVar14 & 1) == 0) {
                                                                    lib::L2CValue::L2CValue
                                                                              (aLStack120,
                                                                                                                                                              
                                                  _FIGHTER_KIND_TOONLINK);
                                                  uVar14 = lib::L2CValue::operator__
                                                                     (aLStack200,aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  if ((uVar14 & 1) == 0) {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,_FIGHTER_KIND_YOUNGLINK);
                                                    uVar14 = lib::L2CValue::operator__
                                                                       (aLStack200,aLStack120);
                                                    lib::L2CValue::_L2CValue(aLStack120);
                                                    if ((uVar14 & 1) == 0) {
                                                      lib::L2CValue::L2CValue
                                                                (aLStack120,_FIGHTER_KIND_PZENIGAME)
                                                      ;
                                                      uVar14 = lib::L2CValue::operator__
                                                                         (aLStack200,aLStack120);
                                                      lib::L2CValue::_L2CValue(aLStack120);
                                                      if ((uVar14 & 1) == 0) {
                                                        lib::L2CValue::L2CValue
                                                                  (aLStack120,
                                                                   _FIGHTER_KIND_PLIZARDON);
                                                        uVar14 = lib::L2CValue::operator__
                                                                           (aLStack200,aLStack120);
                                                        lib::L2CValue::_L2CValue(aLStack120);
                                                        if ((uVar14 & 1) == 0) {
                                                          lib::L2CValue::L2CValue
                                                                    (aLStack120,
                                                                     _FIGHTER_KIND_PFUSHIGISOU);
                                                          uVar14 = lib::L2CValue::operator__
                                                                             (aLStack200,aLStack120)
                                                          ;
                                                          lib::L2CValue::_L2CValue(aLStack120);
                                                          if ((uVar14 & 1) == 0) {
                                                            lib::L2CValue::L2CValue
                                                                      (aLStack120,
                                                                       _FIGHTER_KIND_SONIC);
                                                            uVar14 = lib::L2CValue::operator__
                                                                               (aLStack200,
                                                                                aLStack120);
                                                            lib::L2CValue::_L2CValue(aLStack120);
                                                            if ((uVar14 & 1) == 0) {
                                                              lib::L2CValue::L2CValue
                                                                        (aLStack120,
                                                                         _FIGHTER_KIND_PURIN);
                                                              uVar14 = lib::L2CValue::operator__
                                                                                 (aLStack200,
                                                                                  aLStack120);
                                                              lib::L2CValue::_L2CValue(aLStack120);
                                                              if ((uVar14 & 1) == 0) {
                                                                lib::L2CValue::L2CValue
                                                                          (aLStack120,
                                                                           _FIGHTER_KIND_MARIOD);
                                                                uVar14 = lib::L2CValue::operator__
                                                                                   (aLStack200,
                                                                                    aLStack120);
                                                                lib::L2CValue::_L2CValue(aLStack120)
                                                                ;
                                                                if ((uVar14 & 1) == 0) {
                                                                  lib::L2CValue::L2CValue
                                                                            (aLStack120,
                                                                             _FIGHTER_KIND_LUCINA);
                                                                  uVar14 = lib::L2CValue::operator__
                                                                                     (aLStack200,
                                                                                      aLStack120);
                                                                  lib::L2CValue::_L2CValue
                                                                            (aLStack120);
                                                                  if ((uVar14 & 1) == 0) {
                                                                    lib::L2CValue::L2CValue
                                                                              (aLStack120,
                                                                               _FIGHTER_KIND_PITB);
                                                                    uVar14 = lib::L2CValue::
                                                                             operator__(aLStack200,
                                                                                        aLStack120);
                                                                    lib::L2CValue::_L2CValue
                                                                              (aLStack120);
                                                                    if ((uVar14 & 1) == 0) {
                                                                      lib::L2CValue::L2CValue
                                                                                (aLStack120,
                                                                                                                                                                  
                                                  _FIGHTER_KIND_ROSETTA);
                                                  uVar14 = lib::L2CValue::operator__
                                                                     (aLStack200,aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  if ((uVar14 & 1) == 0) {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,_FIGHTER_KIND_WIIFIT);
                                                    uVar14 = lib::L2CValue::operator__
                                                                       (aLStack200,aLStack120);
                                                    lib::L2CValue::_L2CValue(aLStack120);
                                                    if ((uVar14 & 1) == 0) {
                                                      lib::L2CValue::L2CValue
                                                                (aLStack120,FIGHTER_KIND_LITTLEMAC);
                                                      uVar14 = lib::L2CValue::operator__
                                                                         (aLStack200,aLStack120);
                                                      lib::L2CValue::_L2CValue(aLStack120);
                                                      if ((uVar14 & 1) == 0) {
                                                        lib::L2CValue::L2CValue
                                                                  (aLStack120,_FIGHTER_KIND_MURABITO
                                                                  );
                                                        uVar14 = lib::L2CValue::operator__
                                                                           (aLStack200,aLStack120);
                                                        lib::L2CValue::_L2CValue(aLStack120);
                                                        if ((uVar14 & 1) == 0) {
                                                          lib::L2CValue::L2CValue
                                                                    (aLStack120,
                                                                     _FIGHTER_KIND_PALUTENA);
                                                          uVar14 = lib::L2CValue::operator__
                                                                             (aLStack200,aLStack120)
                                                          ;
                                                          lib::L2CValue::_L2CValue(aLStack120);
                                                          if ((uVar14 & 1) == 0) {
                                                            lib::L2CValue::L2CValue
                                                                      (aLStack120,
                                                                       _FIGHTER_KIND_REFLET);
                                                            uVar14 = lib::L2CValue::operator__
                                                                               (aLStack200,
                                                                                aLStack120);
                                                            lib::L2CValue::_L2CValue(aLStack120);
                                                            if ((uVar14 & 1) == 0) {
                                                              lib::L2CValue::L2CValue
                                                                        (aLStack120,
                                                                         _FIGHTER_KIND_DUCKHUNT);
                                                              uVar14 = lib::L2CValue::operator__
                                                                                 (aLStack200,
                                                                                  aLStack120);
                                                              lib::L2CValue::_L2CValue(aLStack120);
                                                              if ((uVar14 & 1) == 0) {
                                                                lib::L2CValue::L2CValue
                                                                          (aLStack120,
                                                                           FIGHTER_KIND_KOOPAJR);
                                                                uVar14 = lib::L2CValue::operator__
                                                                                   (aLStack200,
                                                                                    aLStack120);
                                                                lib::L2CValue::_L2CValue(aLStack120)
                                                                ;
                                                                if ((uVar14 & 1) == 0) {
                                                                  lib::L2CValue::L2CValue
                                                                            (aLStack120,
                                                                             _FIGHTER_KIND_SHULK);
                                                                  uVar14 = lib::L2CValue::operator__
                                                                                     (aLStack200,
                                                                                      aLStack120);
                                                                  lib::L2CValue::_L2CValue
                                                                            (aLStack120);
                                                                  if ((uVar14 & 1) == 0) {
                                                                    lib::L2CValue::L2CValue
                                                                              (aLStack120,
                                                                                                                                                              
                                                  _FIGHTER_KIND_GEKKOUGA);
                                                  uVar14 = lib::L2CValue::operator__
                                                                     (aLStack200,aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  if ((uVar14 & 1) == 0) {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,_FIGHTER_KIND_PACMAN);
                                                    uVar14 = lib::L2CValue::operator__
                                                                       (aLStack200,aLStack120);
                                                    lib::L2CValue::_L2CValue(aLStack120);
                                                    if ((uVar14 & 1) == 0) {
                                                      lib::L2CValue::L2CValue
                                                                (aLStack120,FIGHTER_KIND_ROCKMAN);
                                                      uVar14 = lib::L2CValue::operator__
                                                                         (aLStack200,aLStack120);
                                                      lib::L2CValue::_L2CValue(aLStack120);
                                                      if ((uVar14 & 1) == 0) {
                                                        lib::L2CValue::L2CValue
                                                                  (aLStack120,_FIGHTER_KIND_MEWTWO);
                                                        uVar14 = lib::L2CValue::operator__
                                                                           (aLStack200,aLStack120);
                                                        lib::L2CValue::_L2CValue(aLStack120);
                                                        if ((uVar14 & 1) == 0) {
                                                          lib::L2CValue::L2CValue
                                                                    (aLStack120,_FIGHTER_KIND_RYU);
                                                          uVar14 = lib::L2CValue::operator__
                                                                             (aLStack200,aLStack120)
                                                          ;
                                                          lib::L2CValue::_L2CValue(aLStack120);
                                                          if ((uVar14 & 1) == 0) {
                                                            lib::L2CValue::L2CValue
                                                                      (aLStack120,
                                                                       _FIGHTER_KIND_LUCAS);
                                                            uVar14 = lib::L2CValue::operator__
                                                                               (aLStack200,
                                                                                aLStack120);
                                                            lib::L2CValue::_L2CValue(aLStack120);
                                                            if ((uVar14 & 1) == 0) {
                                                              lib::L2CValue::L2CValue
                                                                        (aLStack120,
                                                                         _FIGHTER_KIND_ROY);
                                                              uVar14 = lib::L2CValue::operator__
                                                                                 (aLStack200,
                                                                                  aLStack120);
                                                              lib::L2CValue::_L2CValue(aLStack120);
                                                              if ((uVar14 & 1) == 0) {
                                                                lib::L2CValue::L2CValue
                                                                          (aLStack120,
                                                                           _FIGHTER_KIND_CHROM);
                                                                uVar14 = lib::L2CValue::operator__
                                                                                   (aLStack200,
                                                                                    aLStack120);
                                                                lib::L2CValue::_L2CValue(aLStack120)
                                                                ;
                                                                if ((uVar14 & 1) == 0) {
                                                                  lib::L2CValue::L2CValue
                                                                            (aLStack120,
                                                                             _FIGHTER_KIND_CLOUD);
                                                                  uVar14 = lib::L2CValue::operator__
                                                                                     (aLStack200,
                                                                                      aLStack120);
                                                                  lib::L2CValue::_L2CValue
                                                                            (aLStack120);
                                                                  if ((uVar14 & 1) == 0) {
                                                                    lib::L2CValue::L2CValue
                                                                              (aLStack120,
                                                                                                                                                              
                                                  _FIGHTER_KIND_BAYONETTA);
                                                  uVar14 = lib::L2CValue::operator__
                                                                     (aLStack200,aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  if ((uVar14 & 1) == 0) {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,_FIGHTER_KIND_KAMUI);
                                                    uVar14 = lib::L2CValue::operator__
                                                                       (aLStack200,aLStack120);
                                                    lib::L2CValue::_L2CValue(aLStack120);
                                                    if ((uVar14 & 1) == 0) {
                                                      lib::L2CValue::L2CValue
                                                                (aLStack120,_FIGHTER_KIND_SNAKE);
                                                      uVar14 = lib::L2CValue::operator__
                                                                         (aLStack200,aLStack120);
                                                      lib::L2CValue::_L2CValue(aLStack120);
                                                      if ((uVar14 & 1) == 0) {
                                                        lib::L2CValue::L2CValue
                                                                  (aLStack120,_FIGHTER_KIND_RIDLEY);
                                                        uVar14 = lib::L2CValue::operator__
                                                                           (aLStack200,aLStack120);
                                                        lib::L2CValue::_L2CValue(aLStack120);
                                                        if ((uVar14 & 1) == 0) {
                                                          lib::L2CValue::L2CValue
                                                                    (aLStack120,
                                                                     _FIGHTER_KIND_INKLING);
                                                          uVar14 = lib::L2CValue::operator__
                                                                             (aLStack200,aLStack120)
                                                          ;
                                                          lib::L2CValue::_L2CValue(aLStack120);
                                                          if ((uVar14 & 1) == 0) {
                                                            lib::L2CValue::L2CValue
                                                                      (aLStack120,_FIGHTER_KIND_POPO
                                                                      );
                                                            uVar14 = lib::L2CValue::operator__
                                                                               (aLStack200,
                                                                                aLStack120);
                                                            lib::L2CValue::_L2CValue(aLStack120);
                                                            if ((uVar14 & 1) == 0) {
                                                              lib::L2CValue::L2CValue
                                                                        (aLStack120,
                                                                         _FIGHTER_KIND_NANA);
                                                              uVar14 = lib::L2CValue::operator__
                                                                                 (aLStack200,
                                                                                  aLStack120);
                                                              lib::L2CValue::_L2CValue(aLStack120);
                                                              if ((uVar14 & 1) == 0) {
                                                                lib::L2CValue::L2CValue
                                                                          (aLStack120,
                                                                           _FIGHTER_KIND_WOLF);
                                                                uVar14 = lib::L2CValue::operator__
                                                                                   (aLStack200,
                                                                                    aLStack120);
                                                                lib::L2CValue::_L2CValue(aLStack120)
                                                                ;
                                                                if ((uVar14 & 1) == 0) {
                                                                  lib::L2CValue::L2CValue
                                                                            (aLStack120,
                                                                             _FIGHTER_KIND_KROOL);
                                                                  uVar14 = lib::L2CValue::operator__
                                                                                     (aLStack200,
                                                                                      aLStack120);
                                                                  lib::L2CValue::_L2CValue
                                                                            (aLStack120);
                                                                  if ((uVar14 & 1) == 0) {
                                                                    lib::L2CValue::L2CValue
                                                                              (aLStack120,
                                                                               _FIGHTER_KIND_GAOGAEN
                                                                              );
                                                                    uVar14 = lib::L2CValue::
                                                                             operator__(aLStack200,
                                                                                        aLStack120);
                                                                    lib::L2CValue::_L2CValue
                                                                              (aLStack120);
                                                                    if ((uVar14 & 1) == 0) {
                                                                      lib::L2CValue::L2CValue
                                                                                (aLStack120,
                                                                                                                                                                  
                                                  _FIGHTER_KIND_SHIZUE);
                                                  uVar14 = lib::L2CValue::operator__
                                                                     (aLStack200,aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  if ((uVar14 & 1) == 0) {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,_FIGHTER_KIND_SIMON);
                                                    uVar14 = lib::L2CValue::operator__
                                                                       (aLStack200,aLStack120);
                                                    lib::L2CValue::_L2CValue(aLStack120);
                                                    if ((uVar14 & 1) == 0) {
                                                      lib::L2CValue::L2CValue
                                                                (aLStack120,_FIGHTER_KIND_RICHTER);
                                                      uVar14 = lib::L2CValue::operator__
                                                                         (aLStack200,aLStack120);
                                                      lib::L2CValue::_L2CValue(aLStack120);
                                                      if ((uVar14 & 1) == 0) {
                                                        lib::L2CValue::L2CValue
                                                                  (aLStack120,FIGHTER_KIND_KEN);
                                                        uVar14 = lib::L2CValue::operator__
                                                                           (aLStack200,aLStack120);
                                                        lib::L2CValue::_L2CValue(aLStack120);
                                                        if ((uVar14 & 1) == 0) {
                                                          lib::L2CValue::L2CValue
                                                                    (aLStack120,_FIGHTER_KIND_PACKUN
                                                                    );
                                                          uVar14 = lib::L2CValue::operator__
                                                                             (aLStack200,aLStack120)
                                                          ;
                                                          lib::L2CValue::_L2CValue(aLStack120);
                                                          if ((uVar14 & 1) == 0) {
                                                            lib::L2CValue::L2CValue
                                                                      (aLStack120,_FIGHTER_KIND_JACK
                                                                      );
                                                            uVar14 = lib::L2CValue::operator__
                                                                               (aLStack200,
                                                                                aLStack120);
                                                            lib::L2CValue::_L2CValue(aLStack120);
                                                            if ((uVar14 & 1) == 0) {
                                                              lib::L2CValue::L2CValue
                                                                        (aLStack120,
                                                                         _FIGHTER_KIND_BRAVE);
                                                              uVar14 = lib::L2CValue::operator__
                                                                                 (aLStack200,
                                                                                  aLStack120);
                                                              lib::L2CValue::_L2CValue(aLStack120);
                                                              if ((uVar14 & 1) == 0) {
                                                                lib::L2CValue::L2CValue
                                                                          (aLStack120,
                                                                           _FIGHTER_KIND_BUDDY);
                                                                uVar14 = lib::L2CValue::operator__
                                                                                   (aLStack200,
                                                                                    aLStack120);
                                                                lib::L2CValue::_L2CValue(aLStack120)
                                                                ;
                                                                if ((uVar14 & 1) == 0) {
                                                                  lib::L2CValue::L2CValue
                                                                            (aLStack120,
                                                                             _FIGHTER_KIND_DOLLY);
                                                                  uVar14 = lib::L2CValue::operator__
                                                                                     (aLStack200,
                                                                                      aLStack120);
                                                                  lib::L2CValue::_L2CValue
                                                                            (aLStack120);
                                                                  if ((uVar14 & 1) == 0) {
                                                                    lib::L2CValue::L2CValue
                                                                              (aLStack120,
                                                                               _FIGHTER_KIND_MASTER)
                                                                    ;
                                                                    uVar14 = lib::L2CValue::
                                                                             operator__(aLStack200,
                                                                                        aLStack120);
                                                                    lib::L2CValue::_L2CValue
                                                                              (aLStack120);
                                                                    if ((uVar14 & 1) == 0) {
                                                                      lib::L2CValue::L2CValue
                                                                                (aLStack120,
                                                                                                                                                                  
                                                  _FIGHTER_KIND_TANTAN);
                                                  uVar14 = lib::L2CValue::operator__
                                                                     (aLStack200,aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  if ((uVar14 & 1) == 0) {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,_FIGHTER_KIND_PICKEL);
                                                    uVar14 = lib::L2CValue::operator__
                                                                       (aLStack200,aLStack120);
                                                    lib::L2CValue::_L2CValue(aLStack120);
                                                    if ((uVar14 & 1) != 0) {
                                                      this_00 = &this->globalTable;
                                                      pLVar17 = (L2CValue *)
                                                                lib::L2CValue::operator__
                                                                          ((L2CValue *)this_00,10);
                                                      lib::L2CValue::L2CValue
                                                                (aLStack120,
                                                                                                                                  
                                                  _FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV
                                                  );
                                                  iVar6 = lib::L2CValue::as_integer(pLVar17);
                                                  iVar13 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::WorkModule__set_int_impl
                                                            (*ppBVar19,iVar6,iVar13);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  lib::L2CValue::L2CValue(aLStack232,0);
                                                  pLVar17 = (L2CValue *)
                                                            lib::L2CValue::operator__
                                                                      ((L2CValue *)this_00,0x16);
                                                  lib::L2CValue::L2CValue
                                                            (aLStack120,_SITUATION_KIND_GROUND);
                                                  uVar14 = lib::L2CValue::operator__
                                                                     (pLVar17,aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  if ((uVar14 & 1) == 0) {
                                                    lib::L2CValue::L2CValue(aLStack120,2);
                                                    lib::L2CValue::operator_(aLStack232,aLStack120);
                                                  }
                                                  else {
                                                    pLVar17 = (L2CValue *)
                                                              lib::L2CValue::operator__
                                                                        ((L2CValue *)this_00,10);
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,FIGHTER_STATUS_KIND_WALK);
                                                    uVar14 = lib::L2CValue::operator__
                                                                       (pLVar17,aLStack120);
                                                    lib::L2CValue::_L2CValue(aLStack120);
                                                    if ((uVar14 & 1) == 0) {
                                                      lib::L2CValue::L2CValue(aLStack120,1);
                                                      lib::L2CValue::operator_
                                                                (aLStack232,aLStack120);
                                                    }
                                                    else {
                                                      lib::L2CValue::L2CValue(aLStack120,0);
                                                      lib::L2CValue::operator_
                                                                (aLStack232,aLStack120);
                                                    }
                                                  }
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  lib::L2CValue::L2CValue(aLStack168,0x6e5ec7051);
                                                  lib::L2CValue::L2CValue(aLStack184,0x1d5e5c91ca);
                                                  uVar14 = lib::L2CValue::as_integer(aLStack168);
                                                  uVar18 = lib::L2CValue::as_integer(aLStack184);
                                                  iVar6 = app::lua_bind::
                                                          WorkModule__get_param_int_impl
                                                                    (*ppBVar19,uVar14,uVar18);
                                                  lib::L2CValue::L2CValue(aLStack152,iVar6);
                                                  lib::L2CValue::L2CValue(aLStack120,1);
                                                  lib::L2CValue::operator_(aLStack152,aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  lib::L2CValue::L2CValue
                                                            (aLStack120,
                                                                                                                          
                                                  _FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_MINI_JUMP_ATTACK_FRAME
                                                  );
                                                  iVar6 = lib::L2CValue::as_integer(aLStack136);
                                                  iVar13 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::WorkModule__set_int_impl
                                                            (*ppBVar19,iVar6,iVar13);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack136);
                                                  lib::L2CValue::_L2CValue(aLStack152);
                                                  lib::L2CValue::_L2CValue(aLStack184);
                                                  lib::L2CValue::_L2CValue(aLStack168);
                                                  lib::L2CValue::L2CValue(aLStack120,0);
                                                  uVar14 = lib::L2CValue::operator__
                                                                     (aLStack232,aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  if ((uVar14 & 1) == 0) {
                                                    lib::L2CValue::L2CValue(aLStack120,1);
                                                    uVar14 = lib::L2CValue::operator__
                                                                       (aLStack232,aLStack120);
                                                    lib::L2CValue::_L2CValue(aLStack120);
                                                    if ((uVar14 & 1) == 0) {
                                                      lib::L2CValue::L2CValue
                                                                (aLStack120,
                                                                                                                                  
                                                  _FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_FALL)
                                                  ;
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N1_WAIT)
                                                  ;
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N1_WALK)
                                                  ;
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  pLVar17 = aLStack232;
                                                  goto LAB_7100237100;
                                                  }
                                                  lib::L2CValue::L2CValue
                                                            (aLStack120,_FIGHTER_KIND_ELIGHT);
                                                  uVar14 = lib::L2CValue::operator__
                                                                     (aLStack200,aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  if ((uVar14 & 1) == 0) {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,_FIGHTER_KIND_EFLAME);
                                                    uVar14 = lib::L2CValue::operator__
                                                                       (aLStack200,aLStack120);
                                                    lib::L2CValue::_L2CValue(aLStack120);
                                                    if ((uVar14 & 1) == 0) {
                                                      lib::L2CValue::L2CValue
                                                                (aLStack120,_FIGHTER_KIND_DEMON);
                                                      uVar14 = lib::L2CValue::operator__
                                                                         (aLStack200,aLStack120);
                                                      lib::L2CValue::_L2CValue(aLStack120);
                                                      if ((uVar14 & 1) != 0) {
                                                        pLVar17 = (L2CValue *)
                                                                  lib::L2CValue::operator__
                                                                            ((L2CValue *)
                                                                             &this->globalTable,0x16
                                                                            );
                                                        lib::L2CValue::L2CValue
                                                                  (aLStack120,_SITUATION_KIND_GROUND
                                                                  );
                                                        uVar14 = lib::L2CValue::operator__
                                                                           (pLVar17,aLStack120);
                                                        lib::L2CValue::_L2CValue(aLStack120);
                                                        if ((uVar14 & 1) == 0) {
                                                          lib::L2CValue::L2CValue
                                                                    (aLStack120,
                                                                                                                                          
                                                  _FIGHTER_KIRBY_STATUS_KIND_DEMON_SPECIAL_N_AIR_START
                                                  );
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_DEMON_SPECIAL_N_GROUND_START
                                                  );
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  lib::L2CValue::L2CValue
                                                            ((L2CValue *)return_value,true);
                                                  goto LAB_7100237110;
                                                  }
                                                  lib::L2CValue::L2CValue
                                                            (aLStack120,_FIGHTER_KIND_EDGE);
                                                  uVar14 = lib::L2CValue::operator__
                                                                     (aLStack200,aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  if ((uVar14 & 1) == 0) {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,_FIGHTER_KIND_TRAIL);
                                                    uVar14 = lib::L2CValue::operator__
                                                                       (aLStack200,aLStack120);
                                                    lib::L2CValue::_L2CValue(aLStack120);
                                                    if ((uVar14 & 1) != 0) {
                                                      pLVar17 = (L2CValue *)
                                                                lib::L2CValue::operator__
                                                                          ((L2CValue *)
                                                                           &this->globalTable,10);
                                                      lib::L2CValue::L2CValue
                                                                (aLStack120,
                                                                                                                                  
                                                  _FIGHTER_TRAIL_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV
                                                  );
                                                  iVar6 = lib::L2CValue::as_integer(pLVar17);
                                                  iVar13 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::WorkModule__set_int_impl
                                                            (*ppBVar19,iVar6,iVar13);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  lib::L2CValue::L2CValue
                                                            (aLStack120,
                                                                                                                          
                                                  _FIGHTER_TRAIL_INSTANCE_WORK_ID_INT_SPECIAL_N_MAGIC_KIND
                                                  );
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  iVar6 = app::lua_bind::WorkModule__get_int_impl
                                                                    (*ppBVar19,iVar6);
                                                  lib::L2CValue::L2CValue(aLStack136,iVar6);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  lib::L2CValue::L2CValue
                                                            (aLStack120,
                                                                                                                          
                                                  _FIGHTER_TRAIL_SPECIAL_N_MAGIC_KIND_FIRE);
                                                  uVar14 = lib::L2CValue::operator__
                                                                     (aLStack136,aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  if ((uVar14 & 1) == 0) {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_TRAIL_SPECIAL_N_MAGIC_KIND_BLIZZARD);
                                                  uVar14 = lib::L2CValue::operator__
                                                                     (aLStack136,aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  if ((uVar14 & 1) == 0) {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_TRAIL_SPECIAL_N_MAGIC_KIND_THUNDER);
                                                  uVar14 = lib::L2CValue::operator__
                                                                     (aLStack136,aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  if ((uVar14 & 1) == 0) {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_TRAIL_SPECIAL_N1);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_TRAIL_SPECIAL_N3);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_TRAIL_SPECIAL_N2);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_TRAIL_SPECIAL_N1);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  lib::L2CValue::L2CValue
                                                            ((L2CValue *)return_value,true);
                                                  lib::L2CValue::_L2CValue(aLStack136);
                                                  goto LAB_7100237110;
                                                  }
                                                  lib::L2CValue::L2CValue
                                                            (aLStack120,
                                                             FIGHTER_STATUS_KIND_FALL_SPECIAL);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_EDGE_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_EFLAME_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_ELIGHT_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_TANTAN_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_MASTER_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_DOLLY_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_BRAVE_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack152,
                                                                                                                              
                                                  _FIGHTER_PACKUN_GENERATE_ARTICLE_SPIKEBALL);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack152);
                                                  bVar1 = app::lua_bind::
                                                          ArticleModule__is_generatable_impl
                                                                    (*ppBVar19,iVar6);
                                                  lib::L2CValue::L2CValue
                                                            (aLStack136,(bool)(bVar1 & 1));
                                                  lib::L2CValue::operator_(aLStack136);
                                                  bVar2 = lib::L2CValue::operator_cast_to_bool
                                                                    (aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack136);
                                                  lib::L2CValue::_L2CValue(aLStack152);
                                                  if ((bVar2 & 1U) == 0) {
                                                    lib::L2CValue::L2CValue(aLStack168,0);
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue(aLStack168,1);
                                                  }
                                                  lib::L2CValue::L2CValue(aLStack120,0);
                                                  uVar14 = lib::L2CValue::operator__
                                                                     (aLStack168,aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack168);
                                                  if ((uVar14 & 1) == 0) {
                                                    lua2cpp::L2CFighterCommon::
                                                    sub_status_pre_SpecialNCommon(this);
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_PACKUN_SPECIAL_N_FAILURE
                                                  );
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_PACKUN_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_KEN_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_RICHTER_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_SIMON_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_SHIZUE_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_GAOGAEN_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_KROOL_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_WOLF_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_NANA_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_POPO_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_INKLING_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_RIDLEY_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_SNAKE_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_KAMUI_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_BAYONETTA_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_CLOUD_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_CHROM_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_ROY_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_LUCAS_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_RYU_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_MEWTWO_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_ROCKMAN_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_PACMAN_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_GEKKOUGA_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_SHULK_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_KOOPAJR_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_DUCKHUNT_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CAgent::clear_lua_stack((L2CAgent *)this)
                                                    ;
                                                    pvVar15 = (void *)app::sv_system::battle_object
                                                                                (this->luaStateAgent
                                                                                );
                                                    if (pvVar15 == (void *)0x0) {
                                                      lib::L2CValue::L2CValue
                                                                (aLStack120,
                                                                 (L2CValue *)
                                                                 &LUA_SCRIPT_LINE_SYSTEM_POST);
                                                    }
                                                    else {
                                                      lib::L2CValue::L2CValue(aLStack120,pvVar15);
                                                    }
                                                    lib::L2CValue::L2CValue
                                                              (aLStack136,
                                                               _FIGHTER_REFLET_MAGIC_KIND_THUNDER);
                                                    pFVar16 = (Fighter *)
                                                              lib::L2CValue::as_pointer(aLStack120);
                                                    iVar6 = lib::L2CValue::as_integer(aLStack136);
                                                    app::FighterSpecializer_Reflet::change_hud_kind
                                                              (pFVar16,iVar6);
                                                    lib::L2CValue::_L2CValue(aLStack136);
                                                    lib::L2CValue::_L2CValue(aLStack120);
                                                    lib::L2CValue::L2CValue
                                                              (aLStack152,
                                                                                                                              
                                                  _FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_THUNDER_KIND
                                                  );
                                                  iVar6 = lib::L2CValue::as_integer(aLStack152);
                                                  iVar6 = app::lua_bind::WorkModule__get_int_impl
                                                                    (*ppBVar19,iVar6);
                                                  lib::L2CValue::L2CValue(aLStack136,iVar6);
                                                  lib::L2CValue::L2CValue
                                                            (aLStack120,
                                                             _FIGHTER_REFLET_MAGIC_KIND_TRON);
                                                  uVar14 = lib::L2CValue::operator__
                                                                     (aLStack136,aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack136);
                                                  lib::L2CValue::_L2CValue(aLStack152);
                                                  if ((uVar14 & 1) == 0) {
                                                    lib::L2CValue::L2CValue(aLStack168,0);
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue(aLStack168,1);
                                                  }
                                                  lib::L2CValue::L2CValue(aLStack120,0);
                                                  uVar14 = lib::L2CValue::operator__
                                                                     (aLStack168,aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack120);
                                                  lib::L2CValue::_L2CValue(aLStack168);
                                                  if ((uVar14 & 1) == 0) {
                                                    lua2cpp::L2CFighterCommon::
                                                    sub_status_pre_SpecialNCommon(this);
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_TRON_START
                                                  );
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_PALUTENA_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_MURABITO_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_LITTLEMAC_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_WIIFIT_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_ROSETTA_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_PITB_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_LUCINA_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_MARIOD_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_PURIN_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_SONIC_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_PFUSHIGISOU_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_PLIZARDON_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_PZENIGAME_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_YOUNGLINK_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_TOONLINK_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_ROBOT_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_LUCARIO_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_IKE_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_DEDEDE_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_DIDDY_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_PIKMIN_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_SZEROSUIT_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_PIT_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    lib::L2CValue::L2CValue
                                                              (aLStack120,
                                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_METAKNIGHT_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                  }
                                                }
                                                else {
                                                  lib::L2CValue::L2CValue
                                                            (aLStack120,
                                                                                                                          
                                                  _FIGHTER_KIRBY_STATUS_KIND_WARIO_SPECIAL_N);
                                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                  app::lua_bind::
                                                  StatusModule__set_status_kind_interrupt_impl
                                                            (*ppBVar19,iVar6);
                                                }
                                              }
                                              else {
                                                lib::L2CValue::L2CValue
                                                          (aLStack120,
                                                                                                                      
                                                  _FIGHTER_KIRBY_STATUS_KIND_FALCO_SPECIAL_N);
                                                iVar6 = lib::L2CValue::as_integer(aLStack120);
                                                app::lua_bind::
                                                StatusModule__set_status_kind_interrupt_impl
                                                          (*ppBVar19,iVar6);
                                              }
                                            }
                                            else {
                                              lib::L2CValue::L2CValue
                                                        (aLStack120,
                                                         _FIGHTER_KIRBY_STATUS_KIND_GANON_SPECIAL_N)
                                              ;
                                              iVar6 = lib::L2CValue::as_integer(aLStack120);
                                              app::lua_bind::
                                              StatusModule__set_status_kind_interrupt_impl
                                                        (*ppBVar19,iVar6);
                                            }
                                          }
                                          else {
                                            lib::L2CValue::L2CValue
                                                      (aLStack120,
                                                                                                              
                                                  _FIGHTER_KIRBY_STATUS_KIND_GAMEWATCH_SPECIAL_N);
                                            iVar6 = lib::L2CValue::as_integer(aLStack120);
                                            app::lua_bind::
                                            StatusModule__set_status_kind_interrupt_impl
                                                      (*ppBVar19,iVar6);
                                          }
                                        }
                                        else {
                                          lib::L2CValue::L2CValue
                                                    (aLStack120,
                                                     _FIGHTER_KIRBY_STATUS_KIND_MARTH_SPECIAL_N);
                                          iVar6 = lib::L2CValue::as_integer(aLStack120);
                                          app::lua_bind::
                                          StatusModule__set_status_kind_interrupt_impl
                                                    (*ppBVar19,iVar6);
                                        }
                                      }
                                      else {
                                        lib::L2CValue::L2CValue
                                                  (aLStack120,
                                                   _FIGHTER_KIRBY_STATUS_KIND_SHEIK_SPECIAL_N);
                                        iVar6 = lib::L2CValue::as_integer(aLStack120);
                                        app::lua_bind::StatusModule__set_status_kind_interrupt_impl
                                                  (*ppBVar19,iVar6);
                                      }
                                    }
                                    else {
                                      lib::L2CValue::L2CValue
                                                (aLStack120,
                                                 _FIGHTER_KIRBY_STATUS_KIND_ZELDA_SPECIAL_N);
                                      iVar6 = lib::L2CValue::as_integer(aLStack120);
                                      app::lua_bind::StatusModule__set_status_kind_interrupt_impl
                                                (*ppBVar19,iVar6);
                                    }
                                  }
                                  else {
                                    lib::L2CValue::L2CValue
                                              (aLStack120,_FIGHTER_KIRBY_STATUS_KIND_KOOPA_SPECIAL_N
                                              );
                                    iVar6 = lib::L2CValue::as_integer(aLStack120);
                                    app::lua_bind::StatusModule__set_status_kind_interrupt_impl
                                              (*ppBVar19,iVar6);
                                  }
                                }
                                else {
                                  lib::L2CValue::L2CValue
                                            (aLStack120,_FIGHTER_KIRBY_STATUS_KIND_DAISY_SPECIAL_N);
                                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                                  app::lua_bind::StatusModule__set_status_kind_interrupt_impl
                                            (*ppBVar19,iVar6);
                                }
                              }
                              else {
                                lib::L2CValue::L2CValue
                                          (aLStack120,_FIGHTER_KIRBY_STATUS_KIND_PEACH_SPECIAL_N);
                                iVar6 = lib::L2CValue::as_integer(aLStack120);
                                app::lua_bind::StatusModule__set_status_kind_interrupt_impl
                                          (*ppBVar19,iVar6);
                              }
                            }
                            else {
                              lib::L2CValue::L2CValue
                                        (aLStack120,_FIGHTER_KIRBY_STATUS_KIND_NESS_SPECIAL_N);
                              iVar6 = lib::L2CValue::as_integer(aLStack120);
                              app::lua_bind::StatusModule__set_status_kind_interrupt_impl
                                        (*ppBVar19,iVar6);
                            }
                          }
                          else {
                            lib::L2CValue::L2CValue
                                      (aLStack120,_FIGHTER_KIRBY_STATUS_KIND_CAPTAIN_SPECIAL_N);
                            iVar6 = lib::L2CValue::as_integer(aLStack120);
                            app::lua_bind::StatusModule__set_status_kind_interrupt_impl
                                      (*ppBVar19,iVar6);
                          }
                        }
                        else {
                          lib::L2CValue::L2CValue
                                    (aLStack120,_FIGHTER_KIRBY_STATUS_KIND_LUIGI_SPECIAL_N);
                          iVar6 = lib::L2CValue::as_integer(aLStack120);
                          app::lua_bind::StatusModule__set_status_kind_interrupt_impl
                                    (*ppBVar19,iVar6);
                        }
                      }
                      else {
                        lib::L2CValue::L2CValue
                                  (aLStack120,_FIGHTER_KIRBY_STATUS_KIND_PICHU_SPECIAL_N);
                        iVar6 = lib::L2CValue::as_integer(aLStack120);
                        app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar19,iVar6)
                        ;
                      }
                    }
                    else {
                      lib::L2CValue::L2CValue
                                (aLStack120,_FIGHTER_KIRBY_STATUS_KIND_PIKACHU_SPECIAL_N);
                      iVar6 = lib::L2CValue::as_integer(aLStack120);
                      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar19,iVar6);
                    }
                  }
                  else {
                    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIRBY_STATUS_KIND_FOX_SPECIAL_N);
                    iVar6 = lib::L2CValue::as_integer(aLStack120);
                    app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar19,iVar6);
                  }
                }
                else {
                  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIRBY_STATUS_KIND_YOSHI_SPECIAL_N);
                  iVar6 = lib::L2CValue::as_integer(aLStack120);
                  app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar19,iVar6);
                }
              }
              else {
                lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIRBY_STATUS_KIND_SAMUSD_SPECIAL_N);
                iVar6 = lib::L2CValue::as_integer(aLStack120);
                app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar19,iVar6);
              }
            }
            else {
              lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIRBY_STATUS_KIND_SAMUS_SPECIAL_N);
              iVar6 = lib::L2CValue::as_integer(aLStack120);
              app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar19,iVar6);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIRBY_STATUS_KIND_LINK_SPECIAL_N);
            iVar6 = lib::L2CValue::as_integer(aLStack120);
            app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar19,iVar6);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIRBY_STATUS_KIND_DONKEY_SPECIAL_N);
          iVar6 = lib::L2CValue::as_integer(aLStack120);
          app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar19,iVar6);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIRBY_STATUS_KIND_MARIO_SPECIAL_N);
        iVar6 = lib::L2CValue::as_integer(aLStack120);
        app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar19,iVar6);
      }
      goto LAB_71002370fc;
    }
    FUN_71002206f0(aLStack216,this);
    pLVar17 = aLStack216;
  }
  else {
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIRBY_STATUS_KIND_MIIFIGHTER_SPECIAL_N);
    iVar6 = lib::L2CValue::as_integer(aLStack120);
    app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar19,iVar6);
LAB_71002370fc:
    pLVar17 = aLStack120;
  }
LAB_7100237100:
  lib::L2CValue::_L2CValue(pLVar17);
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
LAB_7100237110:
  lib::L2CValue::_L2CValue(aLStack200);
  return;
}

