
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialLwHold_main(L2CFighterJack *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this_00;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,true);
  lib::L2CValue::L2CValue(aLStack96,0xf250902eb);
  lib::L2CValue::L2CValue(aLStack112,0x132e908f3f);
  lib::L2CValue::L2CValue(aLStack128,&DAT_7100007e70);
  FUN_7100007400(this,aLStack80,aLStack96,aLStack112,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar4 = lib::L2CValue::operator__(aLStack144,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,false);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_JACK_STATUS_SPECIAL_LW_INT_HOLD_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack144,0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack64,&DAT_71000207d0);
  lib::L2CValue::operator_(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack176,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack192,0xcd3fe072d);
  uVar4 = lib::L2CValue::as_integer(aLStack176);
  uVar5 = lib::L2CValue::as_integer(aLStack192);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack64,fVar6);
  fVar6 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::HitModule__set_hit_stop_mul_impl(this->moduleAccessor,fVar6,3,0.0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack64,SpecialLwHold_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

