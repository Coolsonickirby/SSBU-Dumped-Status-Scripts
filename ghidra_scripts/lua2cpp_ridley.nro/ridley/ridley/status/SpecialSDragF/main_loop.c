
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRidley::status::SpecialSDragF_main_loop(L2CFighterRidley *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  FighterModuleAccessor *pFVar8;
  float fVar9;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_FLAG_LEFT);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,fVar9);
    lib::L2CValue::L2CValue(aLStack80,-1.0);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_S_DRAG_WALL);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      goto LAB_710001f77c;
    }
  }
  lib::L2CValue::L2CValue(aLStack112,GROUND_TOUCH_FLAG_RIGHT);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,fVar9);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_S_DRAG_WALL);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_710001f77c:
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      return;
    }
  }
  lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0x14165df986);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  lib::L2CValue::L2CValue(aLStack80,10.0);
  lib::L2CValue::operator_(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::_L2CValue(aLStack128);
  fVar9 = (float)lib::L2CValue::as_number(aLStack96);
  bVar1 = app::lua_bind::GroundModule__is_ottotto_impl(this->moduleAccessor,fVar9);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_S_DRAG_CLIFF);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_710001fc50;
  }
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator__(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_S_DRAG_JUMP);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_710001fc50;
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  pFVar8 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
  fVar9 = (float)app::FighterSpecializer_Ridley::get_special_s_ground_degree(pFVar8);
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RIDLEY_STATUS_SPECIAL_S_WORK_FLOAT_GROUND_DEGREE);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack128,fVar9);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,0x11a823ea78);
  uVar5 = lib::L2CValue::as_integer(aLStack80);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack160);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar7 = aLStack128;
  lib::L2CValue::operator_(aLStack112,pLVar7);
  lib::L2CAgent::math_abs((L2CAgent *)auStack160,pLVar7);
  uVar5 = lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  if ((uVar5 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    pFVar8 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
    fVar9 = (float)app::FighterSpecializer_Ridley::get_special_s_ground_degree(pFVar8);
    lib::L2CValue::L2CValue(aLStack80,fVar9);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,5.0);
    lib::L2CValue::L2CValue(aLStack176,aLStack80);
    lib::L2CValue::L2CValue(aLStack192,(L2CValue *)auStack160);
    FUN_710001e510(this,aLStack176,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RIDLEY_STATUS_SPECIAL_S_WORK_INT_GRAB_COUNT);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,iVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack224,0x13244c5880);
    uVar5 = lib::L2CValue::as_integer(aLStack80);
    uVar6 = lib::L2CValue::as_integer(aLStack224);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack208,iVar4);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack80);
    uVar5 = lib::L2CValue::operator__(aLStack208,(L2CValue *)auStack160);
    if ((uVar5 & 1) == 0) {
LAB_710001fc1c:
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      FUN_710001fec0(aLStack224,this);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator__(aLStack224,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((uVar5 & 1) == 0) goto LAB_710001fc1c;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_S_DRAG_JUMP);
      lib::L2CValue::L2CValue(aLStack224,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x20);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_S_DRAG_CLIFF);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
LAB_710001fc50:
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

