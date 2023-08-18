
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PickelSpecialN1Jump_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_710012e5a0();
  FUN_7100131dd0(this);
  FUN_7100132080(this);
  FUN_7100137cd0(aLStack64,this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_JUMP);
    FUN_7100132590(aLStack80,this,aLStack96);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar3 & 1) == 0) {
      FUN_7100136640(aLStack80,this);
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((bVar1 & 1U) == 0) {
          lua2cpp::L2CFighterCommon::sub_air_check_superleaf_fall_slowly(this);
          FUN_71001332e0(this);
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N1_FALL);
          lib::L2CValue::L2CValue(aLStack80,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack64);
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

