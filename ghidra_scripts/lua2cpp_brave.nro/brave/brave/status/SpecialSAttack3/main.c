
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialSAttack3_main(L2CFighterBrave *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  float fVar6;
  undefined auStack320 [32];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
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
  
  FUN_7100029630(aLStack96,this);
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_S_WORK_INT_LIGHTNING_INTERVAL_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack128,0xd2eb5914d);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack112,fVar6);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,aLStack112);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_BRAVE_STATUS_SPECIAL_S_FLAG_SUCCESS_SP);
  FUN_7100016db0(this,aLStack128,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack160,0xa0a7907e5);
  lib::L2CValue::L2CValue(aLStack176,0xefa2b6d71);
  lib::L2CValue::L2CValue(aLStack192,false);
  lib::L2CValue::L2CValue(aLStack224,aLStack160);
  lib::L2CValue::L2CValue(aLStack240,aLStack176);
  lib::L2CValue::L2CValue(aLStack256,aLStack192);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0x0);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  pLVar5 = (L2CValue *)0x0;
  fVar6 = (float)app::lua_bind::PostureModule__rot_z_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue((L2CValue *)auStack320,fVar6);
  lib::L2CAgent::math_rad((L2CAgent *)auStack320,pLVar5);
  lib::L2CValue::L2CValue(aLStack80,-25.0);
  lib::L2CValue::operator_(aLStack80,(L2CValue *)(auStack320 + 0x10));
  lib::L2CValue::_L2CValue(aLStack80);
  fVar6 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::operator_(aLStack288,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack320 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack272,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_S_WORK_FLOAT_LIGHTNING_OFFSET_X);
  fVar6 = (float)lib::L2CValue::as_number(aLStack288);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack80,SpecialSAttack3_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

