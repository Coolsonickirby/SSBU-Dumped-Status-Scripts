
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::SpecialLwEmpty_end(L2CFighterInkling *this,L2CValue *return_value)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
  uVar2 = lib::L2CValue::as_integer(this_00);
  iVar3 = app::FighterSpecializer_Inkling::get_ink_work_id(uVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar6);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar4 = lib::L2CValue::operator_(aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_MOTION_PART_SET_KIND_TANK);
    lib::L2CValue::L2CValue(aLStack112,0xa48dd021e);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,true);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    HVar5 = lib::L2CValue::as_hash(aLStack112);
    fVar6 = (float)lib::L2CValue::as_number(aLStack128);
    fVar7 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__add_motion_partial_impl
              (this->moduleAccessor,iVar3,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),false,0.0,true,true,
               false);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_MOTION_PART_SET_KIND_TANK);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::MotionModule__remove_motion_partial_impl(this->moduleAccessor,iVar3,false);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

