
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRosettaTico::status::FreeWait_main_loop(L2CWeaponRosettaTico *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  BattleObjectModuleAccessor *pBVar6;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,false);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_TARGET_MOVE);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack176 + 0x10),
               _WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_LOITER_MOVE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) goto LAB_7100034cf8;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
LAB_7100034cf8:
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::operator_(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack128,aLStack112);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack176,_WEAPON_ROSETTA_TICO_STATUS_COMMON_WORK_FLAG_JOSTLE_WAIT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack176);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack176,_WEAPON_ROSETTA_TICO_STATUS_FREE_WAIT_WORK_INT_WAIT_FRAME);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack176);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::L2CValue
              (aLStack208,_WEAPON_ROSETTA_TICO_STATUS_FREE_WAIT_WORK_FLOAT_TARGET_LENGTH);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack192,fVar8);
    lib::L2CValue::L2CValue(aLStack240,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_TARGET_LENGTH);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack224,fVar8);
    pLVar5 = aLStack224;
    lib::L2CValue::operator_(aLStack192,pLVar5);
    lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar5);
    lib::L2CValue::operator_(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar4 = lib::L2CValue::operator__((L2CValue *)(auStack176 + 0x10),aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack176,
                 _WEAPON_ROSETTA_TICO_STATUS_FREE_WAIT_WORK_FLOAT_TARGET_LENGTH);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack176);
      fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      uVar4 = lib::L2CValue::operator_(aLStack96,aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      if ((uVar4 & 1) != 0) goto LAB_7100034f00;
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack192,fVar8);
      lib::L2CValue::L2CValue(aLStack224,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_TARGET_X);
      iVar3 = lib::L2CValue::as_integer(aLStack224);
      fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack208,fVar8);
      lib::L2CValue::operator_(aLStack192,aLStack208);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar4 = lib::L2CValue::operator_(aLStack96,(L2CValue *)auStack176);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar4 & 1) == 0) goto LAB_7100034f2c;
      lib::L2CValue::L2CValue(aLStack96,false);
      lib::L2CValue::operator_(aLStack112,aLStack96);
    }
    else {
LAB_7100034f00:
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_TICO_STATUS_COMMON_WORK_FLAG_JOSTLE_WAIT);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    }
    lib::L2CValue::_L2CValue(aLStack96);
  }
LAB_7100034f2c:
  lib::L2CValue::L2CValue((L2CValue *)auStack176,true);
  lib::L2CValue::L2CValue(aLStack192,true);
  lib::L2CValue::L2CValue(aLStack208,aLStack112);
  lib::L2CValue::L2CValue(aLStack224,aLStack128);
  FUN_710002d130(aLStack96,this,auStack176,aLStack192,aLStack208,aLStack224);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_71000353b4;
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack240,0x1e0779188c);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack240);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71000353b4;
    }
    lib::L2CValue::L2CValue(aLStack240);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    bVar1 = app::WeaponSpecializer_RosettaTico::is_weak(pBVar6);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xbb1661178);
      lib::L2CValue::operator_(aLStack240,aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0x90283ac04);
      lib::L2CValue::operator_(aLStack240,aLStack96);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack256,1.0);
    lib::L2CValue::L2CValue(aLStack272,false);
    HVar7 = lib::L2CValue::as_hash(aLStack240);
    fVar8 = (float)lib::L2CValue::as_number(aLStack96);
    fVar9 = (float)lib::L2CValue::as_number(aLStack256);
    bVar1 = lib::L2CValue::as_bool(aLStack272);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack240);
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    bVar1 = app::WeaponSpecializer_RosettaTico::is_weak(pBVar6);
    lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack240);
    if ((bVar2 & 1U) == 0) {
      pLVar5 = aLStack240;
    }
    else {
      HVar7 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack256,HVar7);
      lib::L2CValue::L2CValue(aLStack96,0xbb1661178);
      uVar4 = lib::L2CValue::operator__(aLStack256,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      if ((uVar4 & 1) == 0) goto LAB_71000353a8;
      lib::L2CValue::L2CValue(aLStack96,0x90283ac04);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,1.0);
      lib::L2CValue::L2CValue(aLStack272,false);
      HVar7 = lib::L2CValue::as_hash(aLStack96);
      fVar8 = (float)lib::L2CValue::as_number(aLStack240);
      fVar9 = (float)lib::L2CValue::as_number(aLStack256);
      bVar1 = lib::L2CValue::as_bool(aLStack272);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      pLVar5 = aLStack96;
    }
    lib::L2CValue::_L2CValue(pLVar5);
  }
LAB_71000353a8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000353b4:
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

