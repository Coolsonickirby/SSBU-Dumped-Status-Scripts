
void __thiscall L2CFighterRockman::status::Walk_exec(L2CFighterRockman *this,L2CValue *return_value)

{
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0x9fece0d5d);
  lib::L2CValue::L2CValue(aLStack64,0xb4fb275bd);
  lib::L2CValue::L2CValue(aLStack80,0x9eeaf3544);
  lib::L2CValue::L2CValue(aLStack96,&DAT_7100007eb0);
  lua2cpp::L2CFighterCommon::sub_walk_uniq_process_main_common
            (this,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

