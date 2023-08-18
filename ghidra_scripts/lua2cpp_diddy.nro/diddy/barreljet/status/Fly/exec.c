
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDiddyBarreljet::status::Fly_exec(L2CWeaponDiddyBarreljet *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Hash40 HVar5;
  ulong uVar6;
  ulong *this_00;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue *in_x2;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
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
  undefined auStack400 [16];
  undefined auStack384 [32];
  ulong local_160;
  BattleObject *pBStack344;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  ppBVar9 = &this->moduleAccessor;
  fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,fVar10);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_160,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_FLOAT_FLY_ANGLE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_160);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_INSTANCE_WORK_ID_FLAG_SWALLOWED);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack144,0x570211ebd);
    lib::L2CValue::operator_(aLStack128,aLStack112);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    HVar5 = lib::L2CValue::as_hash(aLStack144);
    uVar13 = lib::L2CValue::as_number(aLStack160);
    lVar14 = lib::L2CValue::as_number(aLStack176);
    uVar11 = lib::L2CValue::as_number(aLStack192);
    local_160 = uVar13 & 0xffffffff | lVar14 << 0x20;
    pBStack344 = (BattleObject *)(ulong)uVar11;
    app::lua_bind::ModelModule__set_joint_rotate_impl(*ppBVar9,HVar5,(Vector3f *)&local_160,0,0);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    FUN_71000010f0(this);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100002a8c;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_160,0.0);
  uVar13 = lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  if ((uVar13 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_160,360.0);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    lib::L2CValue::operator_(aLStack128,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_INT_FLY_CONTROL_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack176,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,0);
  uVar13 = lib::L2CValue::operator_((L2CValue *)&local_160,aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar13 & 1) != 0) {
    fVar10 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_160,fVar10);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    fVar10 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_160,fVar10);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  }
  lib::L2CValue::L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack192);
  lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)&local_160,0.0);
  uVar13 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  if ((uVar13 & 1) == 0) {
LAB_7100001698:
    pLVar7 = aLStack144;
    lib::L2CAgent::math_atan((L2CAgent *)aLStack160,pLVar7,in_x2);
    lib::L2CAgent::math_deg((L2CAgent *)auStack224,pLVar7);
    lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)auStack224);
    lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::L2CValue((L2CValue *)&local_160,90.0);
    lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),(L2CValue *)auStack224);
    lib::L2CValue::_L2CValue((L2CValue *)auStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue((L2CValue *)&local_160,360.0);
    uVar13 = lib::L2CValue::operator_((L2CValue *)&local_160,(L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    if ((uVar13 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_160,0.0);
      uVar13 = lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),(L2CValue *)&local_160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
      if ((uVar13 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_160,360.0);
        lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),(L2CValue *)&local_160);
        lib::L2CValue::_L2CValue((L2CValue *)&local_160);
        lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),(L2CValue *)auStack224);
        goto LAB_71000017dc;
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_160,360.0);
      lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),(L2CValue *)&local_160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
      lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),(L2CValue *)auStack224);
LAB_71000017dc:
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
    }
    uVar13 = lib::L2CValue::operator__(aLStack128,(L2CValue *)(auStack224 + 0x10));
    if ((uVar13 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_160,
                 _WEAPON_DIDDY_BARRELJET_STATUS_WORK_FLAG_FLY_TARGET_ANGLE_ARRIVAL);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_160);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_160,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_FLOAT_FLY_TARGET_ANGLE);
    fVar10 = (float)lib::L2CValue::as_number((L2CValue *)(auStack224 + 0x10));
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_160);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    lib::L2CValue::L2CValue((L2CValue *)auStack224,0xf0314e83e);
    lib::L2CValue::L2CValue(aLStack240,0x1136e0578a);
    uVar13 = lib::L2CValue::as_integer((L2CValue *)auStack224);
    uVar6 = lib::L2CValue::as_integer(aLStack240);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar13,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_160,fVar10);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)auStack224);
    lib::L2CValue::operator_(aLStack192,aLStack176);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_160,0.0);
    uVar13 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    if ((uVar13 & 1) == 0) goto LAB_7100001698;
    lib::L2CValue::L2CValue((L2CValue *)&local_160,-1);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack224,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_INT_FLY_ANGLE_SET_COUNT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_160);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack224);
    app::lua_bind::WorkModule__add_int_impl(*ppBVar9,iVar3,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)auStack224);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    lib::L2CValue::L2CValue(aLStack240,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_INT_FLY_ANGLE_SET_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack224,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_160,0);
    uVar13 = lib::L2CValue::operator__((L2CValue *)auStack224,(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    if ((uVar13 & 1) == 0) {
      lib::L2CValue::L2CValue
                (aLStack256,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_FLAG_FLY_TARGET_ANGLE_ARRIVAL);
      iVar3 = lib::L2CValue::as_integer(aLStack256);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_160,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      if ((bVar2 & 1U) != 0) goto LAB_7100001944;
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack224,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_FLOAT_FLY_TARGET_ANGLE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack224);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_160,fVar10);
      lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),(L2CValue *)&local_160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
      this_00 = (ulong *)auStack224;
    }
    else {
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::_L2CValue(aLStack240);
LAB_7100001944:
      lib::L2CValue::L2CValue((L2CValue *)auStack224,0x66933a7e6);
      lib::L2CValue::L2CValue(aLStack240,360.0);
      HVar5 = lib::L2CValue::as_hash((L2CValue *)auStack224);
      fVar10 = (float)lib::L2CValue::as_number(aLStack240);
      fVar10 = (float)app::sv_math::randf(HVar5,fVar10);
      lib::L2CValue::L2CValue((L2CValue *)&local_160,fVar10);
      lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),(L2CValue *)&local_160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_160,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_FLOAT_FLY_TARGET_ANGLE);
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)(auStack224 + 0x10));
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_160);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,0xf0314e83e);
      lib::L2CValue::L2CValue(aLStack240,0x1267a0b26e);
      uVar13 = lib::L2CValue::as_integer((L2CValue *)auStack224);
      uVar6 = lib::L2CValue::as_integer(aLStack240);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar13,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_160,iVar3);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::L2CValue(aLStack240,0xf0314e83e);
      lib::L2CValue::L2CValue(aLStack256,0x125bad8d37);
      uVar13 = lib::L2CValue::as_integer(aLStack240);
      uVar6 = lib::L2CValue::as_integer(aLStack256);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar13,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,iVar3);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack272,0x66933a7e6);
      lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)&local_160);
      HVar5 = lib::L2CValue::as_hash(aLStack272);
      iVar3 = lib::L2CValue::as_integer(aLStack288);
      uVar11 = app::sv_math::rand(HVar5,iVar3);
      lib::L2CValue::L2CValue(aLStack256,uVar11);
      lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_160);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue
                (aLStack256,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_INT_FLY_ANGLE_SET_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack240);
      iVar4 = lib::L2CValue::as_integer(aLStack256);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue
                (aLStack256,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_FLAG_FLY_TARGET_ANGLE_ARRIVAL);
      iVar3 = lib::L2CValue::as_integer(aLStack256);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      this_00 = &local_160;
    }
    lib::L2CValue::_L2CValue((L2CValue *)this_00);
    lib::L2CValue::L2CValue((L2CValue *)auStack224,0xf0314e83e);
    lib::L2CValue::L2CValue(aLStack240,0x13c110decf);
    uVar13 = lib::L2CValue::as_integer((L2CValue *)auStack224);
    uVar6 = lib::L2CValue::as_integer(aLStack240);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar13,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_160,fVar10);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)auStack224);
    lib::L2CValue::L2CValue((L2CValue *)auStack224,0xf0314e83e);
    lib::L2CValue::L2CValue(aLStack240,0x12fc74f3c7);
    uVar13 = lib::L2CValue::as_integer((L2CValue *)auStack224);
    uVar6 = lib::L2CValue::as_integer(aLStack240);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar13,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_160,fVar10);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack224);
  lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,0.0);
  uVar13 = lib::L2CValue::operator_((L2CValue *)&local_160,aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  if ((uVar13 & 1) == 0) {
    lib::L2CValue::operator_(aLStack240);
    lib::L2CValue::L2CValue((L2CValue *)&local_160,180.0);
    lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    lib::L2CValue::L2CValue((L2CValue *)&local_160,0.0);
    uVar13 = lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar13 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_160,1.0);
      lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)&local_160);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_160,-1.0);
      lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)&local_160);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_160,180.0);
    lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    lib::L2CValue::L2CValue((L2CValue *)&local_160,0.0);
    uVar13 = lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar13 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_160,-1.0);
      lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)&local_160);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_160,1.0);
      lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)&local_160);
    }
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,0xf0314e83e);
  lib::L2CValue::L2CValue(aLStack272,0xf3c0b03d9);
  uVar13 = lib::L2CValue::as_integer((L2CValue *)&local_160);
  uVar6 = lib::L2CValue::as_integer(aLStack272);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar13,uVar6);
  lib::L2CValue::L2CValue(aLStack256,fVar10);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_160,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_FLOAT_FLY_ANGLE_SPEED);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_160);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack272,fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,0.0);
  uVar13 = lib::L2CValue::operator_((L2CValue *)&local_160,(L2CValue *)auStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  if ((uVar13 & 1) == 0) {
    lib::L2CValue::operator_(aLStack272,aLStack256);
    lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    lib::L2CValue::operator_(aLStack192);
    uVar13 = lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    if ((uVar13 & 1) != 0) {
      lib::L2CValue::operator_(aLStack272,aLStack192);
    }
  }
  else {
    lib::L2CValue::operator_(aLStack272,aLStack256);
    lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    uVar13 = lib::L2CValue::operator_(aLStack176,aLStack272);
    if ((uVar13 & 1) != 0) {
      lib::L2CValue::operator_(aLStack272,aLStack176);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_160,0.0);
  uVar13 = lib::L2CValue::operator__(aLStack240,(L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  if (((uVar13 & 1) == 0) ||
     (uVar13 = lib::L2CValue::operator__(aLStack272,aLStack240), (uVar13 & 1) == 0)) {
    lib::L2CValue::L2CValue((L2CValue *)&local_160,0.0);
    uVar13 = lib::L2CValue::operator_((L2CValue *)&local_160,aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    if (((uVar13 & 1) != 0) &&
       (uVar13 = lib::L2CValue::operator__(aLStack240,aLStack272), (uVar13 & 1) != 0))
    goto LAB_7100002030;
  }
  else {
LAB_7100002030:
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_160,
               _WEAPON_DIDDY_BARRELJET_STATUS_WORK_FLAG_FLY_TARGET_ANGLE_ARRIVAL);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_160);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    lib::L2CValue::operator_(aLStack272,aLStack240);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_160,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_FLOAT_FLY_ANGLE_SPEED);
  fVar10 = (float)lib::L2CValue::as_number(aLStack272);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_160);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::operator_(aLStack128,aLStack272);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,360.0);
  uVar13 = lib::L2CValue::operator_((L2CValue *)&local_160,aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  if ((uVar13 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_160,360.0);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    lib::L2CValue::operator_(aLStack128,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
  }
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xd0,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)(auStack384 + 0x10),_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack384 + 0x10));
  uVar15 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,(float)uVar15);
  lib::L2CValue::L2CValue(aLStack336,(float)((ulong)uVar15 >> 0x20));
  lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_160);
  lib::L2CValue::operator_(pLVar8,aLStack336);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack384 + 0x10));
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x1fbdb2615);
  fVar10 = (float)lib::L2CValue::as_number(pLVar7);
  fVar12 = (float)lib::L2CValue::as_number(pLVar8);
  fVar10 = (float)app::sv_math::vec2_length(fVar10,fVar12);
  lib::L2CValue::L2CValue((L2CValue *)(auStack384 + 0x10),fVar10);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack400,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_INT_FLY_IMPELLENT_COUNT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack400);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack384,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,0);
  uVar13 = lib::L2CValue::operator_((L2CValue *)&local_160,(L2CValue *)auStack384);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)auStack384);
  lib::L2CValue::_L2CValue((L2CValue *)auStack400);
  if ((uVar13 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_160,-1);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack384,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_INT_FLY_IMPELLENT_COUNT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_160);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack384);
    app::lua_bind::WorkModule__add_int_impl(*ppBVar9,iVar3,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)auStack384);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack384,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_FLOAT_FLY_IMPELLENT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack384);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_160,fVar10);
    uVar13 = lib::L2CValue::operator_((L2CValue *)(auStack384 + 0x10),(L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_160);
    lib::L2CValue::_L2CValue((L2CValue *)auStack384);
    if ((uVar13 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack384,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_FLOAT_FLY_IMPELLENT);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack384);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_160,fVar10);
      lib::L2CValue::operator_((L2CValue *)(auStack384 + 0x10),(L2CValue *)&local_160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_160);
      lib::L2CValue::_L2CValue((L2CValue *)auStack384);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_160,360.0);
  pLVar7 = aLStack128;
  lib::L2CValue::operator_((L2CValue *)&local_160,pLVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CAgent::math_rad((L2CAgent *)auStack400,pLVar7);
  lib::L2CValue::_L2CValue((L2CValue *)auStack400);
  lib::L2CValue::operator_((L2CValue *)(auStack384 + 0x10));
  lib::L2CAgent::math_sin((L2CAgent *)auStack384,pLVar7);
  pLVar7 = aLStack432;
  lib::L2CValue::operator_((L2CValue *)&local_160,pLVar7);
  lib::L2CAgent::math_cos((L2CAgent *)auStack384,pLVar7);
  lib::L2CValue::operator_((L2CValue *)(auStack384 + 0x10),aLStack464);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x60,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,_WEAPON_DIDDY_BARRELJET_KINETIC_ENERGY_ID_NORMAL);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack400,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack432,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar7);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack432);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,_WEAPON_DIDDY_BARRELJET_KINETIC_ENERGY_ID_GRAVITY);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack400,0x1fbdb2615);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar7);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,_WEAPON_DIDDY_BARRELJET_KINETIC_ENERGY_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack432,0.0);
  lib::L2CValue::L2CValue(aLStack464,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack432);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack464);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,_WEAPON_DIDDY_BARRELJET_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::L2CValue(aLStack432,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack432);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_160,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_FLOAT_FLY_ANGLE);
  fVar10 = (float)lib::L2CValue::as_number(aLStack128);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_160);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_160,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_FLOAT_ROLL_ANGLE_SPEED);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_160);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack432,fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,0xf0314e83e);
  lib::L2CValue::L2CValue(aLStack480,0x18fee7fa52);
  uVar13 = lib::L2CValue::as_integer((L2CValue *)&local_160);
  uVar6 = lib::L2CValue::as_integer(aLStack480);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar13,uVar6);
  lib::L2CValue::L2CValue(aLStack464,fVar10);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue(aLStack496,0xf0314e83e);
  lib::L2CValue::L2CValue(aLStack512,0x14fe0dab05);
  uVar13 = lib::L2CValue::as_integer(aLStack496);
  uVar6 = lib::L2CValue::as_integer(aLStack512);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar13,uVar6);
  lib::L2CValue::L2CValue(aLStack480,fVar10);
  lib::L2CValue::operator_(aLStack432,aLStack480);
  lib::L2CValue::operator_(aLStack432,(L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack496);
  uVar13 = lib::L2CValue::operator_(aLStack464,aLStack432);
  if ((uVar13 & 1) != 0) {
    lib::L2CValue::operator_(aLStack432,aLStack464);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_160,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_FLOAT_ROLL_ANGLE_SPEED);
  fVar10 = (float)lib::L2CValue::as_number(aLStack432);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_160);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_160,_WEAPON_DIDDY_BARRELJET_STATUS_WORK_FLOAT_ROLL_ANGLE);
  fVar10 = (float)lib::L2CValue::as_number(aLStack432);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_160);
  app::lua_bind::WorkModule__add_float_impl(*ppBVar9,fVar10,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue(aLStack480,0x570211ebd);
  lib::L2CValue::operator_(aLStack128,aLStack112);
  lib::L2CValue::L2CValue(aLStack512,0.0);
  lib::L2CValue::L2CValue(aLStack528,0.0);
  HVar5 = lib::L2CValue::as_hash(aLStack480);
  uVar13 = lib::L2CValue::as_number(aLStack496);
  lVar14 = lib::L2CValue::as_number(aLStack512);
  uVar11 = lib::L2CValue::as_number(aLStack528);
  local_160 = uVar13 & 0xffffffff | lVar14 << 0x20;
  pBStack344 = (BattleObject *)(ulong)uVar11;
  app::lua_bind::ModelModule__set_joint_rotate_impl(*ppBVar9,HVar5,(Vector3f *)&local_160,0,0);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack480);
  FUN_71000010f0(this);
  lib::L2CValue::L2CValue(aLStack512,0xf0314e83e);
  lib::L2CValue::L2CValue(aLStack528,0x134684c3b1);
  uVar13 = lib::L2CValue::as_integer(aLStack512);
  uVar6 = lib::L2CValue::as_integer(aLStack528);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar13,uVar6);
  lib::L2CValue::L2CValue(aLStack496,fVar10);
  lib::L2CValue::operator_((L2CValue *)(auStack384 + 0x10),aLStack496);
  lib::L2CValue::L2CValue(aLStack560,0xf0314e83e);
  lib::L2CValue::L2CValue(aLStack576,0x13239031bc);
  uVar13 = lib::L2CValue::as_integer(aLStack560);
  uVar6 = lib::L2CValue::as_integer(aLStack576);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar13,uVar6);
  lib::L2CValue::L2CValue(aLStack544,fVar10);
  lib::L2CValue::operator_(aLStack480,aLStack544);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue(aLStack560);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack512);
  fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_160);
  app::lua_bind::AttackModule__set_power_add_status_impl(*ppBVar9,fVar10);
  lib::L2CValue::L2CValue(aLStack480,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack480);
  app::lua_bind::WorkModule__dec_int_impl(*ppBVar9,iVar3);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue((L2CValue *)auStack400);
  lib::L2CValue::_L2CValue((L2CValue *)auStack384);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack384 + 0x10));
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
LAB_7100002a8c:
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

