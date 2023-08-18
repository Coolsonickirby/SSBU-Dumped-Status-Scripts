
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::KoopajrSpecialNHold_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KOOPAJR_STATUS_SPECIAL_N_FLOAT_CHARGE);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack144,0xca3dc30e5);
    uVar3 = lib::L2CValue::as_integer(aLStack128);
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar5);
    uVar3 = lib::L2CValue::operator__(aLStack112,aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack176,CONTROL_PAD_BUTTON_SPECIAL);
      iVar2 = lib::L2CValue::as_integer(aLStack176);
      bVar1 = app::lua_bind::ControlModule__check_button_off_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
    }
    else {
      bVar1 = 1;
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_KOOPAJR_SPECIAL_N_SHOOT);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_7100198f00;
    }
  }
  lib::L2CValue::L2CValue(aLStack96,aLStack80);
  lib::L2CValue::L2CValue(aLStack112,0x1011ca9abe);
  lib::L2CValue::L2CValue(aLStack128,0x14907f15fe);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_TYPE_KOOPAJR_SPECIAL_N);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_TYPE_KOOPAJR_SPECIAL_AIR_N);
  lib::L2CValue::L2CValue(aLStack176,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
  lib::L2CValue::L2CValue(aLStack192,GROUND_CORRECT_KIND_AIR);
  FUN_71001986f0(aLStack64,this,aLStack96,aLStack112,aLStack128,aLStack144,aLStack160,aLStack176,
                 aLStack192);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100198f00:
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

