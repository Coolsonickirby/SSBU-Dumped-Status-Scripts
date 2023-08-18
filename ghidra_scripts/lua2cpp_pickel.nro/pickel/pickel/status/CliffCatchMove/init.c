
void __thiscall
L2CFighterPickel::status::CliffCatchMove_init(L2CFighterPickel *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0xb99d9746c);
  lib::L2CValue::L2CValue(aLStack64,0x4b12bd53f);
  lua2cpp::L2CFighterCommon::sub_cliff_catch_move_uniq_process_init_common
            (this,(L2CValue)0xd0,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

