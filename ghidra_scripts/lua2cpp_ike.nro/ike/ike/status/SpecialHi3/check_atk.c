
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterIke::status::SpecialHi3_check_atk(L2CFighterIke *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  L2CValue *in_x1;
  L2CValue *in_x2;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack128,in_x1);
  lib::L2CValue::L2CValue(aLStack144,in_x2);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x81b51c4e0);
  lib::L2CValue::L2CValue(aLStack64,1);
  uVar1 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar1 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,aLStack144);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_SPECIAL_HI_WORK_INT_HIT_OBJECT_ID);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_IKE_STATUS_SPECIAL_HI_WORK_INT_HIT_OBJECT_NUM);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_IKE_SPECIAL_HI_TARGET_NUM_MAX);
    lua2cpp::L2CFighterCommon::sub_set_meteor_hit_id_to_work
              (this,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

