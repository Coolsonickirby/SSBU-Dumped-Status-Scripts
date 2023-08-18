
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::FinalReady_main_loop(L2CFighterJack *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  L2CValue *this_00;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    this_00 = aLStack80;
  }
  else {
    bVar1 = app::lua_bind::FighterManager__is_prepared_movie_impl
                      (FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_4_START_INT);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) goto LAB_71000182cc;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_JACK_STATUS_KIND_FINAL_SCENE01);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    this_00 = aLStack64;
  }
  lib::L2CValue::_L2CValue(this_00);
LAB_71000182cc:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

