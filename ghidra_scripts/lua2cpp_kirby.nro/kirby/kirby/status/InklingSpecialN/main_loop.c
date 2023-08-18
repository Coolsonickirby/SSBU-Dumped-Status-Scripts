
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::InklingSpecialN_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  L2CValue *this_00;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0xf3a6aace3);
  lib::L2CValue::L2CValue(aLStack96,0x1331f32137);
  lib::L2CValue::L2CValue(aLStack112,true);
  FUN_710016e110(this,aLStack80,aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_710016e8b0(this);
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
    uVar3 = lib::L2CValue::as_integer(this_00);
    iVar4 = app::FighterSpecializer_Inkling::get_ink_work_id(uVar3);
    lib::L2CValue::L2CValue(aLStack64,iVar4);
    iVar4 = lib::L2CValue::as_integer(aLStack64);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack128,fVar6);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_INKLING_SPECIAL_N_SHOOT);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x70);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_INKLING_SPECIAL_N_END);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x70);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    lib::L2CValue::_L2CValue(aLStack128);
  }
  return;
}

