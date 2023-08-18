
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialLwEndure_main(L2CFighterJack *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,true);
  lib::L2CValue::L2CValue(aLStack80,0x11e1b7298a);
  lib::L2CValue::L2CValue(aLStack96,0x1597eadd95);
  lib::L2CValue::L2CValue(aLStack112,0);
  FUN_7100007400(this,aLStack64,aLStack80,aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack160,0xcd3fe072d);
  uVar2 = lib::L2CValue::as_integer(aLStack144);
  uVar3 = lib::L2CValue::as_integer(aLStack160);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar4);
  fVar4 = (float)lib::L2CValue::as_number(aLStack128);
  app::lua_bind::HitModule__set_hit_stop_mul_impl(this->moduleAccessor,fVar4,3,0.0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_JACK_STATUS_SPECIAL_LW_FLAG_ENDURE);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,SpecialLwEndure_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

