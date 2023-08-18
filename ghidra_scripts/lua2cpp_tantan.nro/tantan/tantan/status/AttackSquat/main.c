
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AttackSquat_main(L2CFighterTantan *this,L2CValue *return_value)

{
  ulong uVar1;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_71000429c0(aLStack80,this);
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar1 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar1 & 1) != 0) {
    FUN_7100042d70(aLStack64,this);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack80,0x1199aaf537);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_SQUAT);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_SQUAT_WAIT);
  lua2cpp::L2CFighterCommon::status_Squat_sub_param
            (this,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,AttackSquat_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

