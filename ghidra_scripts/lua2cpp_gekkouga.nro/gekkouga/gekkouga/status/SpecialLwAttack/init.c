
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::SpecialLwAttack_init(L2CFighterGekkouga *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  L2CAgent *pLVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong *puVar8;
  ulong uVar9;
  Hash40 HVar10;
  L2CValue *pLVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  uint uVar14;
  long lVar15;
  L2CValue aLStack784 [16];
  L2CValue aLStack768 [16];
  L2CValue aLStack752 [16];
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  ulong local_2a0;
  ulong uStack664;
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
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
  undefined auStack208 [32];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  undefined8 local_80;
  lua_State *plStack120;
  Hash40MapEntry **local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,false);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue(aLStack304,0);
  lib::L2CValue::L2CValue(aLStack320,0);
  lib::L2CValue::L2CValue(aLStack336,0);
  lib::L2CValue::L2CValue(aLStack352,0);
  lib::L2CValue::L2CValue(aLStack368,0);
  lib::L2CValue::L2CValue(aLStack384,0);
  lib::L2CValue::L2CValue(aLStack400,0);
  lib::L2CValue::L2CValue(aLStack416,0);
  lib::L2CValue::L2CValue(aLStack432,0);
  lib::L2CValue::L2CValue(aLStack448,0);
  lib::L2CValue::L2CValue(aLStack464,0);
  lib::L2CValue::L2CValue(aLStack480,0);
  lib::L2CValue::L2CValue(aLStack496,0);
  lib::L2CValue::L2CValue(aLStack512,0);
  lib::L2CValue::L2CValue(aLStack528,0);
  lib::L2CValue::L2CValue(aLStack544,0);
  lib::L2CValue::L2CValue(aLStack560,0);
  lib::L2CValue::L2CValue(aLStack576,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,false);
  lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  this_00 = &this->globalTable;
  pLVar11 = (L2CValue *)0x1a;
  pLVar5 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
  lib::L2CAgent::math_abs(pLVar5,pLVar11);
  lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  pLVar11 = (L2CValue *)0x1b;
  pLVar5 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
  lib::L2CAgent::math_abs(pLVar5,pLVar11);
  lib::L2CValue::operator_(aLStack336,(L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1018dfb2f4);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0x117d041f8d);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  pLVar11 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_80);
  ppBVar12 = &this->moduleAccessor;
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar6,(ulong)pLVar11);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar13);
  lib::L2CValue::operator_(aLStack528,(L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::operator_(aLStack288,aLStack336);
  uVar6 = lib::L2CValue::operator_((L2CValue *)&local_2a0,aLStack528);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  if ((uVar6 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,0.0);
    uVar6 = lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_2a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_2a0,1.0);
      lib::L2CValue::operator_(aLStack368,(L2CValue *)&local_2a0);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_2a0,-1.0);
      lib::L2CValue::operator_(aLStack368,(L2CValue *)&local_2a0);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,-1.0);
    lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_2a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    lib::L2CValue::operator_(pLVar7,aLStack368);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,-1.0);
    lib::L2CValue::operator_(aLStack608,(L2CValue *)&local_2a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
    lib::L2CAgent::math_atan((L2CAgent *)&local_80,aLStack592,pLVar11);
    lib::L2CValue::operator_((L2CValue *)auStack208,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack592);
    lib::L2CValue::_L2CValue(aLStack608);
    puVar8 = &local_80;
  }
  else {
    fVar13 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar12);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar13);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_ATTACKER_POS_X);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar13);
    uVar6 = lib::L2CValue::operator_((L2CValue *)&local_70,(L2CValue *)&local_2a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_2a0,1.0);
      lib::L2CValue::operator_(aLStack368,(L2CValue *)&local_2a0);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_2a0,-1.0);
      lib::L2CValue::operator_(aLStack368,(L2CValue *)&local_2a0);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,0.0);
    lib::L2CValue::operator_((L2CValue *)auStack208,(L2CValue *)&local_2a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,true);
    lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_2a0);
    puVar8 = &local_2a0;
  }
  lib::L2CValue::_L2CValue((L2CValue *)puVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_UP)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_2a0,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_UP_SIDE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_2a0,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_SIDE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_2a0,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_DOWN_SIDE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_2a0,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_DOWN);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,45.0);
  lib::L2CValue::operator_(aLStack384,(L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,0.0);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,2.0);
  lib::L2CValue::operator_(aLStack384,(L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::operator_(aLStack176,aLStack384);
  lib::L2CValue::operator_(aLStack544,(L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::operator_(aLStack544,aLStack384);
  lib::L2CValue::operator_(aLStack496,(L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::operator_(aLStack496,aLStack384);
  lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::operator_(aLStack256,aLStack384);
  lib::L2CValue::operator_(aLStack416,(L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::operator_(aLStack416,aLStack384);
  lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::operator_(aLStack272,aLStack384);
  lib::L2CValue::operator_(aLStack464,(L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::operator_(aLStack464,aLStack384);
  lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),(L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,0.0);
  puVar8 = &local_2a0;
  lib::L2CValue::operator_(aLStack400,(L2CValue *)puVar8);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack240);
  if ((bVar1 & 1U) == 0) {
    lib::L2CAgent::math_deg((L2CAgent *)auStack208,(L2CValue *)puVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,180.0);
    lib::L2CValue::operator_((L2CValue *)&local_2a0,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::operator_(aLStack400,(L2CValue *)&local_70);
  }
  else {
    lib::L2CAgent::math_deg((L2CAgent *)auStack208,(L2CValue *)puVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,360.0);
    lib::L2CValue::operator_((L2CValue *)&local_2a0,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::operator_(aLStack400,(L2CValue *)&local_70);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  uVar6 = lib::L2CValue::operator__(aLStack160,aLStack400);
  if (((uVar6 & 1) == 0) ||
     (uVar6 = lib::L2CValue::operator_(aLStack400,aLStack176), (uVar6 & 1) == 0)) {
    uVar6 = lib::L2CValue::operator__(aLStack176,aLStack400);
    if (((uVar6 & 1) == 0) ||
       (uVar6 = lib::L2CValue::operator_(aLStack400,aLStack544), (uVar6 & 1) == 0)) {
      uVar6 = lib::L2CValue::operator__(aLStack544,aLStack400);
      if (((uVar6 & 1) == 0) ||
         (uVar6 = lib::L2CValue::operator_(aLStack400,aLStack496), (uVar6 & 1) == 0)) {
        uVar6 = lib::L2CValue::operator__(aLStack496,aLStack400);
        if (((uVar6 & 1) == 0) ||
           (uVar6 = lib::L2CValue::operator_(aLStack400,aLStack256), (uVar6 & 1) == 0)) {
          uVar6 = lib::L2CValue::operator__(aLStack256,aLStack400);
          if (((uVar6 & 1) == 0) ||
             (uVar6 = lib::L2CValue::operator_(aLStack400,aLStack416), (uVar6 & 1) == 0)) {
            uVar6 = lib::L2CValue::operator__(aLStack416,aLStack400);
            if (((uVar6 & 1) == 0) ||
               (uVar6 = lib::L2CValue::operator_(aLStack400,aLStack272), (uVar6 & 1) == 0)) {
              uVar6 = lib::L2CValue::operator__(aLStack272,aLStack400);
              if (((uVar6 & 1) == 0) ||
                 (uVar6 = lib::L2CValue::operator_(aLStack400,aLStack464), (uVar6 & 1) == 0)) {
                uVar6 = lib::L2CValue::operator__(aLStack464,aLStack400);
                if (((uVar6 & 1) == 0) ||
                   (uVar6 = lib::L2CValue::operator_(aLStack400,(L2CValue *)(auStack208 + 0x10)),
                   (uVar6 & 1) == 0)) {
                  lib::L2CValue::L2CValue
                            ((L2CValue *)&local_2a0,
                             _FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_SIDE);
                  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
                  app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
                  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
                  lib::L2CValue::L2CValue(aLStack592,0x1018dfb2f4);
                  lib::L2CValue::L2CValue(aLStack608,0xf15524f7d);
                  uVar6 = lib::L2CValue::as_integer(aLStack592);
                  uVar9 = lib::L2CValue::as_integer(aLStack608);
                  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                            (*ppBVar12,uVar6,uVar9);
                  lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar13);
                  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,10.0);
                  lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_2a0);
                  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
                  lib::L2CValue::operator_(aLStack560,(L2CValue *)&local_70);
                }
                else {
                  lib::L2CValue::L2CValue
                            ((L2CValue *)&local_2a0,
                             _FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_UP_SIDE);
                  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
                  app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
                  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
                  lib::L2CValue::L2CValue(aLStack592,0x1018dfb2f4);
                  lib::L2CValue::L2CValue(aLStack608,0x12ce296d70);
                  uVar6 = lib::L2CValue::as_integer(aLStack592);
                  uVar9 = lib::L2CValue::as_integer(aLStack608);
                  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                            (*ppBVar12,uVar6,uVar9);
                  lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar13);
                  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,10.0);
                  lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_2a0);
                  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
                  lib::L2CValue::operator_(aLStack560,(L2CValue *)&local_70);
                }
              }
              else {
                lib::L2CValue::L2CValue
                          ((L2CValue *)&local_2a0,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_UP
                          );
                iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
                app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
                lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
                lib::L2CValue::L2CValue(aLStack592,0x1018dfb2f4);
                lib::L2CValue::L2CValue(aLStack608,0xd3dbcb395);
                uVar6 = lib::L2CValue::as_integer(aLStack592);
                uVar9 = lib::L2CValue::as_integer(aLStack608);
                fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                          (*ppBVar12,uVar6,uVar9);
                lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar13);
                lib::L2CValue::L2CValue((L2CValue *)&local_2a0,10.0);
                lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_2a0);
                lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
                lib::L2CValue::operator_(aLStack560,(L2CValue *)&local_70);
              }
            }
            else {
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_2a0,
                         _FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_UP_SIDE);
              iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
              app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
              lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
              lib::L2CValue::L2CValue(aLStack592,0x1018dfb2f4);
              lib::L2CValue::L2CValue(aLStack608,0x12ce296d70);
              uVar6 = lib::L2CValue::as_integer(aLStack592);
              uVar9 = lib::L2CValue::as_integer(aLStack608);
              fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar6,uVar9)
              ;
              lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar13);
              lib::L2CValue::L2CValue((L2CValue *)&local_2a0,10.0);
              lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_2a0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
              lib::L2CValue::operator_(aLStack560,(L2CValue *)&local_70);
            }
          }
          else {
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_2a0,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_SIDE);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
            lib::L2CValue::L2CValue(aLStack592,0x1018dfb2f4);
            lib::L2CValue::L2CValue(aLStack608,0xf15524f7d);
            uVar6 = lib::L2CValue::as_integer(aLStack592);
            uVar9 = lib::L2CValue::as_integer(aLStack608);
            fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar6,uVar9);
            lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar13);
            lib::L2CValue::L2CValue((L2CValue *)&local_2a0,10.0);
            lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_2a0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
            lib::L2CValue::operator_(aLStack560,(L2CValue *)&local_70);
          }
        }
        else {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_2a0,
                     _FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_DOWN_SIDE);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
          lib::L2CValue::L2CValue(aLStack592,0x1018dfb2f4);
          lib::L2CValue::L2CValue(aLStack608,0x14d6234bde);
          uVar6 = lib::L2CValue::as_integer(aLStack592);
          uVar9 = lib::L2CValue::as_integer(aLStack608);
          fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar6,uVar9);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar13);
          lib::L2CValue::L2CValue((L2CValue *)&local_2a0,10.0);
          lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_2a0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
          lib::L2CValue::operator_(aLStack560,(L2CValue *)&local_70);
        }
      }
      else {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_2a0,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_DOWN);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
        lib::L2CValue::L2CValue(aLStack592,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack608,0xf2a2cc4f3);
        uVar6 = lib::L2CValue::as_integer(aLStack592);
        uVar9 = lib::L2CValue::as_integer(aLStack608);
        fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar6,uVar9);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar13);
        lib::L2CValue::L2CValue((L2CValue *)&local_2a0,10.0);
        lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_2a0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
        lib::L2CValue::operator_(aLStack560,(L2CValue *)&local_70);
      }
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_2a0,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_DOWN_SIDE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
      lib::L2CValue::L2CValue(aLStack592,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack608,0x14d6234bde);
      uVar6 = lib::L2CValue::as_integer(aLStack592);
      uVar9 = lib::L2CValue::as_integer(aLStack608);
      fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar6,uVar9);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar13);
      lib::L2CValue::L2CValue((L2CValue *)&local_2a0,10.0);
      lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_2a0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
      lib::L2CValue::operator_(aLStack560,(L2CValue *)&local_70);
    }
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_2a0,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_SIDE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::L2CValue(aLStack592,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack608,0xf15524f7d);
    uVar6 = lib::L2CValue::as_integer(aLStack592);
    uVar9 = lib::L2CValue::as_integer(aLStack608);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar6,uVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar13);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,10.0);
    lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_2a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::operator_(aLStack560,(L2CValue *)&local_70);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue(aLStack608);
  lib::L2CValue::_L2CValue(aLStack592);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack240);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::operator_(aLStack304,aLStack368);
    lib::L2CValue::operator_(aLStack480,aLStack288);
    lib::L2CValue::operator_(aLStack224,aLStack336);
  }
  else {
    lib::L2CValue::L2CValue(aLStack592,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack608,0xd3b673e8c);
    uVar6 = lib::L2CValue::as_integer(aLStack592);
    uVar9 = lib::L2CValue::as_integer(aLStack608);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar6,uVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar13);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,10.0);
    lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_2a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::operator_(aLStack560,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack608);
    lib::L2CValue::_L2CValue(aLStack592);
    lib::L2CValue::operator_(aLStack368);
    lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_2a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,1.0);
    lib::L2CValue::operator_(aLStack480,(L2CValue *)&local_2a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,1.0);
    lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_2a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  }
  pLVar11 = aLStack480;
  lib::L2CValue::operator_(aLStack560,pLVar11);
  lib::L2CAgent::math_cos((L2CAgent *)auStack208,pLVar11);
  lib::L2CValue::operator_((L2CValue *)&local_80,aLStack592);
  lib::L2CValue::operator_((L2CValue *)&local_70,aLStack304);
  lib::L2CValue::operator_(aLStack576,(L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack592);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  pLVar11 = aLStack224;
  lib::L2CValue::operator_(aLStack560,pLVar11);
  lib::L2CAgent::math_sin((L2CAgent *)auStack208,pLVar11);
  lib::L2CValue::operator_((L2CValue *)&local_70,(L2CValue *)&local_80);
  lib::L2CValue::operator_(aLStack352,(L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,100.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_2a0);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_80);
  app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_2a0);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack576);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
  app::lua_bind::KineticModule__enable_energy_impl(*ppBVar12,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,100.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_2a0);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
  app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_2a0);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
  app::lua_bind::KineticModule__enable_energy_impl(*ppBVar12,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_ATTACKER_POS_X);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar13);
  lib::L2CValue::operator_(aLStack432,(L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_ATTACKER_POS_Y);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar13);
  lib::L2CValue::operator_(aLStack512,(L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_ATTACKER_POS_Z);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar13);
  lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_SET_ROT_N);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,true);
  uVar6 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,0x31d39a761);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_2a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::L2CValue(aLStack592);
    lib::L2CValue::L2CValue(aLStack608);
    lib::L2CValue::L2CValue(aLStack624);
    lib::L2CValue::L2CValue(aLStack688,0.0);
    lib::L2CValue::L2CValue(aLStack704,0.0);
    lib::L2CValue::L2CValue(aLStack720,0.0);
    lib::L2CValue::L2CValue(aLStack736,0.0);
    lib::L2CValue::L2CValue(aLStack752,0.0);
    lib::L2CValue::L2CValue(aLStack768,0.0);
    HVar10 = lib::L2CValue::as_hash(aLStack144);
    uVar6 = lib::L2CValue::as_number(aLStack688);
    lVar15 = lib::L2CValue::as_number(aLStack704);
    uVar14 = lib::L2CValue::as_number(aLStack720);
    local_70 = (Hash40MapEntry **)(uVar6 & 0xffffffff | lVar15 << 0x20);
    uStack104 = (ulong)uVar14;
    uVar6 = lib::L2CValue::as_number(aLStack736);
    lVar15 = lib::L2CValue::as_number(aLStack752);
    uVar14 = lib::L2CValue::as_number(aLStack768);
    local_80 = (void **)(uVar6 & 0xffffffff | lVar15 << 0x20);
    plStack120 = (lua_State *)(ulong)uVar14;
    app::lua_bind::ModelModule__top_joint_global_position_from_joint_impl
              (*ppBVar12,HVar10,(Vector3f *)&local_70,(Vector3f *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,(float)local_80);
    lib::L2CValue::L2CValue(aLStack656,local_80._4_4_);
    lib::L2CValue::L2CValue(aLStack640,plStack120._0_4_);
    lib::L2CValue::operator_(aLStack592,(L2CValue *)&local_2a0);
    lib::L2CValue::operator_(aLStack608,aLStack656);
    lib::L2CValue::operator_(aLStack624,aLStack640);
    lib::L2CValue::_L2CValue(aLStack640);
    lib::L2CValue::_L2CValue(aLStack656);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::_L2CValue(aLStack768);
    lib::L2CValue::_L2CValue(aLStack752);
    lib::L2CValue::_L2CValue(aLStack736);
    lib::L2CValue::_L2CValue(aLStack720);
    lib::L2CValue::_L2CValue(aLStack704);
    lib::L2CValue::_L2CValue(aLStack688);
    lib::L2CValue::operator_(aLStack512,aLStack608);
    lib::L2CValue::operator_(aLStack512,(L2CValue *)&local_2a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::_L2CValue(aLStack624);
    lib::L2CValue::_L2CValue(aLStack608);
    lib::L2CValue::_L2CValue(aLStack592);
  }
  uVar6 = lib::L2CValue::as_number(aLStack432);
  lVar15 = lib::L2CValue::as_number(aLStack512);
  uVar14 = lib::L2CValue::as_number(aLStack320);
  local_2a0 = uVar6 & 0xffffffff | lVar15 << 0x20;
  uStack664 = (ulong)uVar14;
  puVar8 = &local_2a0;
  app::lua_bind::PostureModule__set_pos_impl(*ppBVar12,(Vector3f *)puVar8);
  fVar13 = (float)lib::L2CValue::as_number(aLStack368);
  app::lua_bind::PostureModule__set_lr_impl(*ppBVar12,fVar13);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack240);
  if ((bVar1 & 1U) == 0) {
    lib::L2CAgent::math_deg((L2CAgent *)auStack208,(L2CValue *)puVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,180.0);
    lib::L2CValue::operator_((L2CValue *)&local_2a0,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::operator_((L2CValue *)auStack208,(L2CValue *)&local_70);
  }
  else {
    lib::L2CAgent::math_deg((L2CAgent *)auStack208,(L2CValue *)puVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,360.0);
    lib::L2CValue::operator_((L2CValue *)&local_2a0,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::operator_((L2CValue *)auStack208,(L2CValue *)&local_70);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x31d39a761);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
  lib::L2CValue::L2CValue(aLStack592,0.0);
  HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_70);
  uVar6 = lib::L2CValue::as_number((L2CValue *)auStack208);
  lVar15 = lib::L2CValue::as_number((L2CValue *)&local_80);
  uVar14 = lib::L2CValue::as_number(aLStack592);
  local_2a0 = uVar6 & 0xffffffff | lVar15 << 0x20;
  uStack664 = (ulong)uVar14;
  app::lua_bind::ModelModule__set_joint_rotate_impl(*ppBVar12,HVar10,(Vector3f *)&local_2a0,0,0);
  lib::L2CValue::_L2CValue(aLStack592);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar12);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,0.0);
  lib::L2CValue::operator_((L2CValue *)auStack208,(L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_2a0,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_RUSH_DIR);
  fVar13 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack784,SITUATION_KIND_AIR);
  lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xf0);
  lib::L2CValue::_L2CValue(aLStack784);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,GROUND_CORRECT_KIND_AIR);
  GVar4 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
  app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue(aLStack560);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

