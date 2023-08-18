
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::BayonettaSpecialNEnd_main(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  long lVar2;
  float fVar3;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack160,0xfd88ebd71);
  lib::L2CValue::L2CValue(aLStack176,0xf3f369076);
  FUN_710017b4d0(aLStack144,this,aLStack160,aLStack176);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_MOTION_KIND_G);
  lVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar1 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack192,0x13d31730a5);
  lib::L2CValue::L2CValue(aLStack208,0x1334af1da2);
  FUN_710017b4d0(aLStack144,this,aLStack192,aLStack208);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_MOTION_KIND_A);
  lVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar1 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_FLOAT_MOTION_RATE);
  fVar3 = (float)lib::L2CValue::as_number(aLStack144);
  iVar1 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar3,iVar1);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,BayonettaSpecialNEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

