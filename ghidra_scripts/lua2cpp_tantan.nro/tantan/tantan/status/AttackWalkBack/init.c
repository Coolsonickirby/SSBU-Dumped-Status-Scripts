
void __thiscall
L2CFighterTantan::status::AttackWalkBack_init(L2CFighterTantan *this,L2CValue *return_value)

{
  ulong uVar1;
  ulong uVar2;
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
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x17fd0178c0);
  lib::L2CValue::L2CValue(aLStack80,0x19bd05360b);
  lib::L2CValue::L2CValue(aLStack96,0x174e037927);
  lib::L2CValue::L2CValue(aLStack112,true);
  lib::L2CValue::L2CValue(aLStack160,0xee2ec2860);
  lib::L2CValue::L2CValue(aLStack176,0);
  uVar1 = lib::L2CValue::as_integer(aLStack160);
  uVar2 = lib::L2CValue::as_integer(aLStack176);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack144,fVar3);
  lib::L2CValue::L2CValue(aLStack208,0xc1f106e8d);
  lib::L2CValue::L2CValue(aLStack224,0x1255dee7b4);
  uVar1 = lib::L2CValue::as_integer(aLStack208);
  uVar2 = lib::L2CValue::as_integer(aLStack224);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack192,fVar3);
  lib::L2CValue::operator_(aLStack144,aLStack192);
  lua2cpp::L2CFighterCommon::sub_walk_uniq_process_init_common_param
            (this,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

