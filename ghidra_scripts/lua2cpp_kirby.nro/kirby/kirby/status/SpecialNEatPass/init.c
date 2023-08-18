
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialNEatTurnAir_init(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  void *pvVar8;
  L2CValue *pLVar9;
  BattleObjectModuleAccessor *pBVar10;
  KineticEnergy *pKVar11;
  ulong *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  L2CValue *this_04;
  Hash40 HVar12;
  L2CAgent *pLVar13;
  BattleObjectModuleAccessor **ppBVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  long lVar18;
  undefined8 uVar19;
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  ulong auStack512 [2];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  ulong local_1c0;
  undefined8 uStack440;
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  ulong auStack160 [2];
  undefined8 local_90;
  lua_State *plStack136;
  
  lib::L2CValue::L2CValue(aLStack192,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack208,0x1d7fd9c363);
  uVar4 = lib::L2CValue::as_integer(aLStack192);
  uVar5 = lib::L2CValue::as_integer(aLStack208);
  ppBVar14 = &this->moduleAccessor;
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack176,fVar15);
  fVar15 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar14);
  lib::L2CValue::L2CValue(aLStack224,fVar15);
  lib::L2CValue::operator_(aLStack176,aLStack224);
  lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0.0);
  lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)&local_1c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_1c0,_FIGHTER_INSTANCE_WORK_ID_FLOAT_CHECK_DEAD_OFFSET_X);
  fVar15 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack176,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack192,0x1d08def3f5);
  uVar4 = lib::L2CValue::as_integer(aLStack176);
  uVar5 = lib::L2CValue::as_integer(aLStack192);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,fVar15);
  lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0.0);
  lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)&local_1c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_1c0,_FIGHTER_INSTANCE_WORK_ID_FLOAT_CHECK_DEAD_OFFSET_Y);
  fVar15 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  iVar3 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar14);
  lib::L2CValue::L2CValue(aLStack464,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_1c0,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_WAIT);
  uVar4 = lib::L2CValue::operator__(aLStack464,(L2CValue *)&local_1c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_1c0,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_FALL);
    uVar4 = lib::L2CValue::operator__(aLStack464,(L2CValue *)&local_1c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_1c0,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_WAIT_JUMP);
      uVar4 = lib::L2CValue::operator__(aLStack464,(L2CValue *)&local_1c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_1c0,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_TURN);
        uVar4 = lib::L2CValue::operator__(aLStack464,(L2CValue *)&local_1c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_1c0,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_TURN_AIR);
          uVar4 = lib::L2CValue::operator__(aLStack464,(L2CValue *)&local_1c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_1c0,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_WALK);
            uVar4 = lib::L2CValue::operator__(aLStack464,(L2CValue *)&local_1c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
            if ((uVar4 & 1) == 0) {
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_1c0,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_JUMP2);
              uVar4 = lib::L2CValue::operator__(aLStack464,(L2CValue *)&local_1c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
              if ((uVar4 & 1) == 0) {
                lib::L2CValue::L2CValue
                          ((L2CValue *)&local_1c0,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_PASS);
                uVar4 = lib::L2CValue::operator__(aLStack464,(L2CValue *)&local_1c0);
                lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
                if ((uVar4 & 1) == 0) goto LAB_7100012408;
                lib::L2CValue::L2CValue(aLStack704,0.0);
                lib::L2CValue::L2CValue(aLStack720,0.0);
                lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x40,(L2CValue)0x30);
                lib::L2CValue::_L2CValue(aLStack720);
                lib::L2CValue::_L2CValue(aLStack704);
                pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
                pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
                lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0.0);
                lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
                lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_1c0);
                lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_90);
                lib::L2CValue::_L2CValue((L2CValue *)&local_90);
                lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
                lib::L2CValue::L2CValue(aLStack176,0xf899192aa);
                lib::L2CValue::L2CValue(aLStack192,0x167e7c3c6a);
                uVar4 = lib::L2CValue::as_integer(aLStack176);
                uVar5 = lib::L2CValue::as_integer(aLStack192);
                fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                          (*ppBVar14,uVar4,uVar5);
                lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar15);
                lib::L2CValue::operator_((L2CValue *)&local_90);
                pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
                lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_1c0);
                lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
                lib::L2CValue::_L2CValue((L2CValue *)&local_90);
                lib::L2CValue::_L2CValue(aLStack192);
                lib::L2CValue::_L2CValue(aLStack176);
                lib::L2CValue::L2CValue((L2CValue *)&local_1c0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
                iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
                pvVar8 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar14,iVar3);
                lib::L2CValue::L2CValue(aLStack176,pvVar8);
                lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
                lib::L2CValue::L2CValue(aLStack192,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
                pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
                pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
                lib::L2CValue::L2CValue(aLStack208,0.0);
                lib::L2CValue::L2CValue(aLStack224,0.0);
                lib::L2CValue::L2CValue(aLStack240,0.0);
                pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
                iVar3 = lib::L2CValue::as_integer(aLStack192);
                uVar4 = lib::L2CValue::as_number(pLVar6);
                uVar16 = lib::L2CValue::as_number(pLVar7);
                local_1c0 = uVar4 & 0xffffffff | (ulong)uVar16 << 0x20;
                uStack440 = 0;
                uVar4 = lib::L2CValue::as_number(aLStack208);
                lVar18 = lib::L2CValue::as_number(aLStack224);
                uVar16 = lib::L2CValue::as_number(aLStack240);
                local_90 = (void **)(uVar4 & 0xffffffff | lVar18 << 0x20);
                plStack136 = (lua_State *)(ulong)uVar16;
                pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar9);
                pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack176);
                app::lua_bind::KineticEnergy__reset_energy_impl
                          (pKVar11,iVar3,(Vector2f *)&local_1c0,(Vector3f *)&local_90,pBVar10);
                lib::L2CValue::_L2CValue(aLStack240);
                lib::L2CValue::_L2CValue(aLStack224);
                lib::L2CValue::_L2CValue(aLStack208);
                lib::L2CValue::_L2CValue(aLStack192);
                pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack176);
                app::lua_bind::KineticEnergy__enable_impl(pKVar11);
                goto LAB_7100012704;
              }
              lib::L2CValue::L2CValue(aLStack176,0.0);
              lib::L2CValue::L2CValue(aLStack192,0.0);
              lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x50,(L2CValue)0x40);
              lib::L2CValue::_L2CValue(aLStack192);
              lib::L2CValue::_L2CValue(aLStack176);
              pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
              pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
              lib::L2CValue::L2CValue((L2CValue *)&local_90,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
              iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
              uVar19 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar14,iVar3);
              lib::L2CValue::L2CValue((L2CValue *)&local_1c0,(float)uVar19);
              lib::L2CValue::L2CValue(aLStack432,(float)((ulong)uVar19 >> 0x20));
              lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_1c0);
              lib::L2CValue::operator_(pLVar7,aLStack432);
              lib::L2CValue::_L2CValue(aLStack432);
              lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_90);
              lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0xf899192aa);
              lib::L2CValue::L2CValue((L2CValue *)&local_90,0x16323a8a50);
              uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
              uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
              fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar4,uVar5)
              ;
              lib::L2CValue::L2CValue(aLStack208,fVar15);
              lib::L2CValue::_L2CValue((L2CValue *)&local_90);
              lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
              lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0xcc9d2f2da);
              lib::L2CValue::L2CValue((L2CValue *)&local_90,0);
              uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
              uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
              fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar4,uVar5)
              ;
              lib::L2CValue::L2CValue(aLStack224,fVar15);
              lib::L2CValue::_L2CValue((L2CValue *)&local_90);
              lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
              pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
              lib::L2CValue::L2CValue(aLStack256,0x104a761b91);
              lib::L2CValue::L2CValue(aLStack272,0);
              uVar4 = lib::L2CValue::as_integer(aLStack256);
              uVar5 = lib::L2CValue::as_integer(aLStack272);
              fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar4,uVar5)
              ;
              lib::L2CValue::L2CValue(aLStack240,fVar15);
              lib::L2CValue::operator_(pLVar6,aLStack240);
              fVar15 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar14);
              lib::L2CValue::L2CValue(aLStack304,fVar15);
              lib::L2CValue::operator_(aLStack224,aLStack304);
              lib::L2CValue::operator_((L2CValue *)&local_90,aLStack288);
              pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
              lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_1c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
              lib::L2CValue::_L2CValue(aLStack288);
              lib::L2CValue::_L2CValue(aLStack304);
              lib::L2CValue::_L2CValue((L2CValue *)&local_90);
              lib::L2CValue::_L2CValue(aLStack240);
              lib::L2CValue::_L2CValue(aLStack272);
              lib::L2CValue::_L2CValue(aLStack256);
              pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
              lib::L2CValue::operator_(pLVar6,aLStack208);
              pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
              lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_1c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
              lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0x107e0218b9);
              lib::L2CValue::L2CValue((L2CValue *)&local_90,0);
              uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
              uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
              fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar4,uVar5)
              ;
              lib::L2CValue::L2CValue(aLStack240,fVar15);
              lib::L2CValue::_L2CValue((L2CValue *)&local_90);
              lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
              pLVar6 = (L2CValue *)0x18cdc1683;
              pLVar13 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
              lib::L2CAgent::math_abs(pLVar13,pLVar6);
              uVar4 = lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_1c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
              if ((uVar4 & 1) != 0) {
                pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
                lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0.0);
                uVar4 = lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_1c0);
                lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
                if ((uVar4 & 1) == 0) {
                  lib::L2CValue::L2CValue((L2CValue *)&local_90,aLStack240);
                }
                else {
                  lib::L2CValue::operator_(aLStack240);
                }
                pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
                lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_90);
                lib::L2CValue::_L2CValue((L2CValue *)&local_90);
              }
              lib::L2CValue::L2CValue(aLStack256,_FIGHTER_STATUS_WORK_ID_INT_RESERVE_JUMP_FROM);
              iVar3 = lib::L2CValue::as_integer(aLStack256);
              iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar3);
              lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar3);
              lib::L2CValue::L2CValue((L2CValue *)&local_1c0,_FIGHTER_STATUS_JUMP_FROM_SHOOT);
              uVar4 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)&local_1c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_90);
              lib::L2CValue::_L2CValue(aLStack256);
              if ((uVar4 & 1) == 0) {
                lib::L2CValue::L2CValue
                          ((L2CValue *)&local_90,_FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_JUMP_MINI);
                iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
                bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar3);
                lib::L2CValue::L2CValue((L2CValue *)&local_1c0,(bool)(bVar1 & 1));
                bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_1c0);
                lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
                lib::L2CValue::_L2CValue((L2CValue *)&local_90);
                if ((bVar2 & 1U) == 0) {
                  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615)
                  ;
                  lib::L2CValue::L2CValue(aLStack272,0x6e5ec7051);
                  lib::L2CValue::L2CValue(aLStack288,0x1077163221);
                  uVar4 = lib::L2CValue::as_integer(aLStack272);
                  uVar5 = lib::L2CValue::as_integer(aLStack288);
                  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                            (*ppBVar14,uVar4,uVar5);
                  lib::L2CValue::L2CValue(aLStack256,fVar15);
                  lib::L2CValue::operator_(pLVar6,aLStack256);
                  lib::L2CValue::L2CValue(aLStack320,0xcbed5c24c);
                  lib::L2CValue::L2CValue(aLStack336,0);
                  uVar4 = lib::L2CValue::as_integer(aLStack320);
                  uVar5 = lib::L2CValue::as_integer(aLStack336);
                  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                            (*ppBVar14,uVar4,uVar5);
                  lib::L2CValue::L2CValue(aLStack304,fVar15);
                  lib::L2CValue::operator_((L2CValue *)&local_90,aLStack304);
                  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615)
                  ;
                  lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_1c0);
                }
                else {
                  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615)
                  ;
                  lib::L2CValue::L2CValue(aLStack272,0x6e5ec7051);
                  lib::L2CValue::L2CValue(aLStack288,0x1077163221);
                  uVar4 = lib::L2CValue::as_integer(aLStack272);
                  uVar5 = lib::L2CValue::as_integer(aLStack288);
                  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                            (*ppBVar14,uVar4,uVar5);
                  lib::L2CValue::L2CValue(aLStack256,fVar15);
                  lib::L2CValue::operator_(pLVar6,aLStack256);
                  lib::L2CValue::L2CValue(aLStack320,0x112ab24d60);
                  lib::L2CValue::L2CValue(aLStack336,0);
                  uVar4 = lib::L2CValue::as_integer(aLStack320);
                  uVar5 = lib::L2CValue::as_integer(aLStack336);
                  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                            (*ppBVar14,uVar4,uVar5);
                  lib::L2CValue::L2CValue(aLStack304,fVar15);
                  lib::L2CValue::operator_((L2CValue *)&local_90,aLStack304);
                  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615)
                  ;
                  lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_1c0);
                }
                lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
                lib::L2CValue::_L2CValue(aLStack304);
                lib::L2CValue::_L2CValue(aLStack336);
                pLVar6 = aLStack320;
              }
              else {
                pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
                lib::L2CValue::L2CValue(aLStack272,0x6e5ec7051);
                lib::L2CValue::L2CValue(aLStack288,0x1077163221);
                uVar4 = lib::L2CValue::as_integer(aLStack272);
                uVar5 = lib::L2CValue::as_integer(aLStack288);
                fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                          (*ppBVar14,uVar4,uVar5);
                lib::L2CValue::L2CValue(aLStack256,fVar15);
                lib::L2CValue::operator_(pLVar6,aLStack256);
                lib::L2CValue::L2CValue(aLStack336,0xcbed5c24c);
                lib::L2CValue::L2CValue(aLStack352,0);
                uVar4 = lib::L2CValue::as_integer(aLStack336);
                uVar5 = lib::L2CValue::as_integer(aLStack352);
                fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                          (*ppBVar14,uVar4,uVar5);
                lib::L2CValue::L2CValue(aLStack320,fVar15);
                lib::L2CValue::L2CValue(aLStack384,0x6e5ec7051);
                lib::L2CValue::L2CValue(aLStack400,0x1692dcff12);
                uVar4 = lib::L2CValue::as_integer(aLStack384);
                uVar5 = lib::L2CValue::as_integer(aLStack400);
                fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                          (*ppBVar14,uVar4,uVar5);
                lib::L2CValue::L2CValue(aLStack368,fVar15);
                lib::L2CValue::operator_(aLStack320,aLStack368);
                lib::L2CValue::operator_((L2CValue *)&local_90,aLStack304);
                pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
                lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_1c0);
                lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
                lib::L2CValue::_L2CValue(aLStack304);
                lib::L2CValue::_L2CValue(aLStack368);
                lib::L2CValue::_L2CValue(aLStack400);
                lib::L2CValue::_L2CValue(aLStack384);
                lib::L2CValue::_L2CValue(aLStack320);
                lib::L2CValue::_L2CValue(aLStack352);
                pLVar6 = aLStack336;
              }
              lib::L2CValue::_L2CValue(pLVar6);
              lib::L2CValue::_L2CValue((L2CValue *)&local_90);
              lib::L2CValue::_L2CValue(aLStack256);
              lib::L2CValue::_L2CValue(aLStack288);
              lib::L2CValue::_L2CValue(aLStack272);
              pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
              lib::L2CValue::operator_(pLVar6,aLStack208);
              pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
              lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_1c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
              lib::L2CValue::L2CValue((L2CValue *)&local_1c0,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
              iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
              pvVar8 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar14,iVar3);
              lib::L2CValue::L2CValue(aLStack256,pvVar8);
              lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
              lib::L2CValue::L2CValue(aLStack272,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
              pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
              lib::L2CValue::L2CValue(aLStack288,0.0);
              lib::L2CValue::L2CValue(aLStack304,0.0);
              lib::L2CValue::L2CValue(aLStack320,0.0);
              lib::L2CValue::L2CValue(aLStack336,0.0);
              this_00 = &this->globalTable;
              pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
              iVar3 = lib::L2CValue::as_integer(aLStack272);
              uVar4 = lib::L2CValue::as_number(pLVar6);
              uVar16 = lib::L2CValue::as_number(aLStack288);
              local_1c0 = uVar4 & 0xffffffff | (ulong)uVar16 << 0x20;
              uStack440 = 0;
              uVar4 = lib::L2CValue::as_number(aLStack304);
              lVar18 = lib::L2CValue::as_number(aLStack320);
              uVar16 = lib::L2CValue::as_number(aLStack336);
              local_90 = (void **)(uVar4 & 0xffffffff | lVar18 << 0x20);
              plStack136 = (lua_State *)(ulong)uVar16;
              pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
              pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack256);
              app::lua_bind::KineticEnergy__reset_energy_impl
                        (pKVar11,iVar3,(Vector2f *)&local_1c0,(Vector3f *)&local_90,pBVar10);
              lib::L2CValue::_L2CValue(aLStack336);
              lib::L2CValue::_L2CValue(aLStack320);
              lib::L2CValue::_L2CValue(aLStack304);
              lib::L2CValue::_L2CValue(aLStack288);
              lib::L2CValue::_L2CValue(aLStack272);
              pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack256);
              app::lua_bind::KineticEnergy__enable_impl(pKVar11);
              lib::L2CValue::_L2CValue(aLStack256);
              lib::L2CValue::L2CValue((L2CValue *)&local_1c0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
              iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
              pvVar8 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar14,iVar3);
              lib::L2CValue::L2CValue(aLStack256,pvVar8);
              lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
              lib::L2CValue::L2CValue(aLStack272,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
              lib::L2CValue::L2CValue(aLStack288,0.0);
              pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
              lib::L2CValue::L2CValue(aLStack304,0.0);
              lib::L2CValue::L2CValue(aLStack320,0.0);
              lib::L2CValue::L2CValue(aLStack336,0.0);
              pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
              iVar3 = lib::L2CValue::as_integer(aLStack272);
              uVar4 = lib::L2CValue::as_number(aLStack288);
              uVar16 = lib::L2CValue::as_number(pLVar6);
              local_1c0 = uVar4 & 0xffffffff | (ulong)uVar16 << 0x20;
              uStack440 = 0;
              uVar4 = lib::L2CValue::as_number(aLStack304);
              lVar18 = lib::L2CValue::as_number(aLStack320);
              uVar16 = lib::L2CValue::as_number(aLStack336);
              local_90 = (void **)(uVar4 & 0xffffffff | lVar18 << 0x20);
              plStack136 = (lua_State *)(ulong)uVar16;
              pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
              pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack256);
              app::lua_bind::KineticEnergy__reset_energy_impl
                        (pKVar11,iVar3,(Vector2f *)&local_1c0,(Vector3f *)&local_90,pBVar10);
              lib::L2CValue::_L2CValue(aLStack336);
              lib::L2CValue::_L2CValue(aLStack320);
              lib::L2CValue::_L2CValue(aLStack304);
              lib::L2CValue::_L2CValue(aLStack288);
              lib::L2CValue::_L2CValue(aLStack272);
              pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack256);
              app::lua_bind::KineticEnergy__enable_impl(pKVar11);
              lib::L2CValue::_L2CValue(aLStack256);
              lib::L2CValue::_L2CValue(aLStack240);
              lib::L2CValue::_L2CValue(aLStack224);
              lib::L2CValue::_L2CValue(aLStack208);
              lib::L2CValue::_L2CValue((L2CValue *)auStack160);
              lib::L2CValue::L2CValue((L2CValue *)&local_1c0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
              pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
              iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
              pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
              app::KineticUtility::clear_unable_energy(iVar3,pBVar10);
              this_01 = &local_1c0;
              goto LAB_7100012710;
            }
            fVar15 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar14);
            lib::L2CValue::L2CValue((L2CValue *)auStack512,fVar15);
            lib::L2CValue::L2CValue((L2CValue *)&local_90,0xf899192aa);
            lib::L2CValue::L2CValue((L2CValue *)auStack160,0x167ff56699);
            uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
            uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack160);
            fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar4,uVar5);
            lib::L2CValue::L2CValue((L2CValue *)&local_1c0,fVar15);
            lib::L2CValue::operator_((L2CValue *)&local_1c0,(L2CValue *)auStack512);
            lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
            lib::L2CValue::_L2CValue((L2CValue *)auStack160);
            lib::L2CValue::_L2CValue((L2CValue *)&local_90);
            lib::L2CValue::L2CValue(aLStack336,0xee2ec2860);
            lib::L2CValue::L2CValue(aLStack352,0);
            uVar4 = lib::L2CValue::as_integer(aLStack336);
            uVar5 = lib::L2CValue::as_integer(aLStack352);
            fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar4,uVar5);
            lib::L2CValue::L2CValue(aLStack544,fVar15);
            lib::L2CValue::L2CValue(aLStack560,0x17fa5b40c2);
            lib::L2CValue::L2CValue
                      (aLStack576,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_FLOAT_EAT_WALK_SPEED);
            lib::L2CValue::L2CValue(aLStack592,aLStack528);
            lib::L2CValue::L2CValue
                      (aLStack608,
                       _FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_FLOAT_EAT_WALK_SPEED_MAX_RATIO);
            lib::L2CValue::L2CValue(aLStack624,false);
            lib::L2CValue::L2CValue(aLStack176,0.0);
            lib::L2CValue::L2CValue(aLStack192,0.0);
            lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x50,(L2CValue)0x40);
            lib::L2CValue::_L2CValue(aLStack192);
            lib::L2CValue::_L2CValue(aLStack176);
            pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
            pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
            lib::L2CValue::L2CValue((L2CValue *)&local_90,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
            uVar19 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar14,iVar3);
            lib::L2CValue::L2CValue((L2CValue *)&local_1c0,(float)uVar19);
            lib::L2CValue::L2CValue(aLStack432,(float)((ulong)uVar19 >> 0x20));
            lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_1c0);
            lib::L2CValue::operator_(pLVar7,aLStack432);
            lib::L2CValue::_L2CValue(aLStack432);
            lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_90);
            lib::L2CValue::L2CValue(aLStack224,0.0);
            lib::L2CValue::L2CValue(aLStack240,0.0);
            lib::L2CValue::L2CValue(aLStack256,0.0);
            lua2cpp::L2CFighterBase::Vector3__create
                      (this,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0x0);
            lib::L2CValue::_L2CValue(aLStack256);
            lib::L2CValue::_L2CValue(aLStack240);
            lib::L2CValue::_L2CValue(aLStack224);
            pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
            pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
            pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x162d277af);
            this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
            this_03 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
            this_04 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x162d277af);
            HVar12 = lib::L2CValue::as_hash(aLStack560);
            uVar4 = lib::L2CValue::as_number(this_02);
            lVar18 = lib::L2CValue::as_number(this_03);
            uVar16 = lib::L2CValue::as_number(this_04);
            local_90 = (void **)(uVar4 & 0xffffffff | lVar18 << 0x20);
            plStack136 = (lua_State *)(ulong)uVar16;
            app::lua_bind::MotionModule__trans_tra_end_frame_impl
                      (*ppBVar14,HVar12,(Vector3f *)&local_90);
            lib::L2CValue::L2CValue((L2CValue *)&local_1c0,(float)local_90);
            lib::L2CValue::L2CValue(aLStack432,local_90._4_4_);
            lib::L2CValue::L2CValue(aLStack416,plStack136._0_4_);
            lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_1c0);
            lib::L2CValue::operator_(pLVar7,aLStack432);
            lib::L2CValue::operator_(pLVar9,aLStack416);
            lib::L2CValue::_L2CValue(aLStack416);
            lib::L2CValue::_L2CValue(aLStack432);
            lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
            lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
            lib::L2CValue::operator_(aLStack592,aLStack544);
            lib::L2CValue::L2CValue((L2CValue *)&local_1c0,true);
            uVar4 = lib::L2CValue::operator__(aLStack624,(L2CValue *)&local_1c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
            if ((uVar4 & 1) == 0) {
              pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
              fVar15 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar14);
              lib::L2CValue::L2CValue(aLStack304,fVar15);
              lib::L2CValue::operator_(pLVar6,aLStack304);
              lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0.0);
              uVar4 = lib::L2CValue::operator_((L2CValue *)&local_1c0,aLStack288);
              lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
              lib::L2CValue::_L2CValue(aLStack288);
              lib::L2CValue::_L2CValue(aLStack304);
              if ((uVar4 & 1) != 0) {
                pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
                lib::L2CValue::operator_(pLVar6,aLStack544);
                lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)&local_1c0);
                goto LAB_71000133b0;
              }
            }
            else {
              pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
              fVar15 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar14);
              lib::L2CValue::L2CValue(aLStack304,fVar15);
              lib::L2CValue::operator_(pLVar6,aLStack304);
              lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0.0);
              uVar4 = lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_1c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
              lib::L2CValue::_L2CValue(aLStack288);
              lib::L2CValue::_L2CValue(aLStack304);
              if ((uVar4 & 1) != 0) {
                pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
                lib::L2CValue::operator_(pLVar6,aLStack544);
                lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)&local_1c0);
LAB_71000133b0:
                lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
              }
            }
            fVar15 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
            iVar3 = lib::L2CValue::as_integer(aLStack576);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar3);
            HVar12 = lib::L2CValue::as_hash(aLStack560);
            uVar16 = app::lua_bind::MotionModule__end_frame_from_hash_impl(*ppBVar14,HVar12);
            lib::L2CValue::L2CValue((L2CValue *)&local_1c0,uVar16);
            pLVar6 = (L2CValue *)0x162d277af;
            pLVar13 = (L2CAgent *)lib::L2CValue::operator__(aLStack208,0x162d277af);
            lib::L2CAgent::math_abs(pLVar13,pLVar6);
            lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_1c0);
            lib::L2CValue::operator_(aLStack272,aLStack304);
            lib::L2CValue::_L2CValue(aLStack304);
            lib::L2CValue::_L2CValue(aLStack320);
            fVar15 = (float)lib::L2CValue::as_number(aLStack288);
            iVar3 = lib::L2CValue::as_integer(aLStack608);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar3);
            lib::L2CValue::_L2CValue(aLStack288);
            lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::_L2CValue((L2CValue *)&local_90);
            lib::L2CValue::_L2CValue(aLStack208);
            lib::L2CValue::_L2CValue((L2CValue *)auStack160);
            lib::L2CValue::_L2CValue(aLStack624);
            lib::L2CValue::_L2CValue(aLStack608);
            lib::L2CValue::_L2CValue(aLStack592);
            lib::L2CValue::_L2CValue(aLStack576);
            lib::L2CValue::_L2CValue(aLStack560);
            lib::L2CValue::_L2CValue(aLStack544);
            lib::L2CValue::_L2CValue(aLStack352);
            lib::L2CValue::_L2CValue(aLStack336);
            lib::L2CValue::L2CValue(aLStack640,(L2CValue *)(this + 1));
            lib::L2CValue::L2CValue
                      (aLStack656,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_FLOAT_EAT_WALK_SPEED);
            lib::L2CValue::L2CValue(aLStack672,aLStack528);
            lib::L2CValue::L2CValue
                      (aLStack688,
                       _FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_FLOAT_EAT_WALK_SPEED_MAX_RATIO);
            pLVar6 = (L2CValue *)lib::L2CValue::as_integer(aLStack656);
            fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,(int)pLVar6);
            lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar15);
            lib::L2CAgent::math_abs((L2CAgent *)&local_90,pLVar6);
            lib::L2CValue::_L2CValue((L2CValue *)&local_90);
            lib::L2CValue::L2CValue((L2CValue *)auStack160,aLStack640);
            lib::L2CValue::L2CValue(aLStack176,(L2CValue *)&local_1c0);
            lib::L2CValue::L2CValue(aLStack192,aLStack672);
            FUN_7100012030(&local_90,auStack160,aLStack176,aLStack192);
            lib::L2CValue::_L2CValue(aLStack192);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue((L2CValue *)auStack160);
            lib::L2CValue::L2CValue(aLStack224,aLStack640);
            lib::L2CValue::L2CValue(aLStack240,(L2CValue *)&local_90);
            lib::L2CValue::L2CValue(aLStack256,(L2CValue *)&local_1c0);
            lib::L2CValue::L2CValue(aLStack272,aLStack672);
            lib::L2CValue::L2CValue(aLStack288,aLStack688);
            FUN_7100011ca0(aLStack208,this,aLStack224,aLStack240,aLStack256,aLStack272,aLStack288);
            lib::L2CValue::_L2CValue(aLStack288);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::_L2CValue(aLStack256);
            lib::L2CValue::_L2CValue(aLStack240);
            lib::L2CValue::_L2CValue(aLStack224);
            lib::L2CValue::L2CValue(aLStack304,0.0);
            lib::L2CValue::L2CValue(aLStack320,false);
            HVar12 = lib::L2CValue::as_hash((L2CValue *)&local_90);
            fVar15 = (float)lib::L2CValue::as_number(aLStack304);
            fVar17 = (float)lib::L2CValue::as_number(aLStack208);
            bVar1 = lib::L2CValue::as_bool(aLStack320);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar14,HVar12,fVar15,fVar17,(bool)(bVar1 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack320);
            lib::L2CValue::L2CValue(aLStack336,aLStack640);
            HVar12 = app::lua_bind::MotionModule__motion_kind_2nd_impl(*ppBVar14);
            lib::L2CValue::L2CValue(aLStack352,HVar12);
            lib::L2CValue::L2CValue(aLStack368,(L2CValue *)&local_1c0);
            lib::L2CValue::L2CValue(aLStack384,aLStack672);
            lib::L2CValue::L2CValue(aLStack400,aLStack688);
            FUN_7100011ca0(aLStack320,this,aLStack336,aLStack352,aLStack368,aLStack384,aLStack400);
            fVar15 = (float)lib::L2CValue::as_number(aLStack320);
            app::lua_bind::MotionModule__set_rate_2nd_impl(*ppBVar14,fVar15);
            lib::L2CValue::_L2CValue(aLStack320);
            lib::L2CValue::_L2CValue(aLStack400);
            lib::L2CValue::_L2CValue(aLStack384);
            lib::L2CValue::_L2CValue(aLStack368);
            lib::L2CValue::_L2CValue(aLStack352);
            lib::L2CValue::_L2CValue(aLStack336);
            lib::L2CValue::_L2CValue(aLStack304);
            lib::L2CValue::_L2CValue(aLStack208);
            lib::L2CValue::_L2CValue((L2CValue *)&local_90);
            lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
            lib::L2CValue::_L2CValue(aLStack688);
            lib::L2CValue::_L2CValue(aLStack672);
            lib::L2CValue::_L2CValue(aLStack656);
            lib::L2CValue::_L2CValue(aLStack640);
            lib::L2CValue::_L2CValue(aLStack528);
            this_01 = auStack512;
            goto LAB_7100012710;
          }
        }
        app::lua_bind::PostureModule__reverse_lr_impl(*ppBVar14);
        app::lua_bind::KineticModule__clear_speed_all_impl(*ppBVar14);
      }
      else {
        lib::L2CValue::L2CValue(aLStack480,0.0);
        lib::L2CValue::L2CValue(aLStack496,0.0);
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x20,(L2CValue)0x10);
        lib::L2CValue::_L2CValue(aLStack496);
        lib::L2CValue::_L2CValue(aLStack480);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
        lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0.0);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
        lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_1c0);
        lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack176,0x167e7c3c6a);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        uVar5 = lib::L2CValue::as_integer(aLStack176);
        fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar4,uVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_1c0,fVar15);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
        lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_1c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue((L2CValue *)&local_1c0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
        pvVar8 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar14,iVar3);
        lib::L2CValue::L2CValue(aLStack176,pvVar8);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1c0);
        lib::L2CValue::L2CValue(aLStack192,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CValue::L2CValue(aLStack240,0.0);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
        iVar3 = lib::L2CValue::as_integer(aLStack192);
        uVar4 = lib::L2CValue::as_number(pLVar6);
        uVar16 = lib::L2CValue::as_number(pLVar7);
        local_1c0 = uVar4 & 0xffffffff | (ulong)uVar16 << 0x20;
        uStack440 = 0;
        uVar4 = lib::L2CValue::as_number(aLStack208);
        lVar18 = lib::L2CValue::as_number(aLStack224);
        uVar16 = lib::L2CValue::as_number(aLStack240);
        local_90 = (void **)(uVar4 & 0xffffffff | lVar18 << 0x20);
        plStack136 = (lua_State *)(ulong)uVar16;
        pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar9);
        pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack176);
        app::lua_bind::KineticEnergy__reset_energy_impl
                  (pKVar11,iVar3,(Vector2f *)&local_1c0,(Vector3f *)&local_90,pBVar10);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack176);
        app::lua_bind::KineticEnergy__enable_impl(pKVar11);
LAB_7100012704:
        lib::L2CValue::_L2CValue(aLStack176);
        this_01 = auStack160;
LAB_7100012710:
        lib::L2CValue::_L2CValue((L2CValue *)this_01);
      }
      goto LAB_7100012408;
    }
  }
  app::lua_bind::HitModule__cancel_xlu_global_impl(*ppBVar14,0);
LAB_7100012408:
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

