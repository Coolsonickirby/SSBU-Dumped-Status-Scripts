
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterTantan::status::Walk_pre(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
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
  
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
  lib::L2CValue::L2CValue(aLStack144,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
  lib::L2CValue::L2CValue(aLStack160,FIGHTER_KINETIC_TYPE_MOTION_LOOP);
  lib::L2CValue::L2CValue(aLStack176,0);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_WALK);
  uVar1 = lib::L2CValue::operator__(this_00,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((uVar1 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack272,aLStack176);
    FUN_7100070c20(aLStack256,aLStack272);
    lib::L2CValue::operator_(aLStack112,aLStack256);
    lib::L2CValue::operator_(aLStack128,aLStack240);
    lib::L2CValue::operator_(aLStack144,aLStack224);
    lib::L2CValue::operator_(aLStack160,aLStack208);
    lib::L2CValue::operator_(aLStack176,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
  }
  lib::L2CValue::L2CValue(aLStack256,aLStack112);
  lib::L2CValue::L2CValue(aLStack288,aLStack128);
  lib::L2CValue::L2CValue(aLStack304,aLStack144);
  lib::L2CValue::L2CValue(aLStack320,0);
  lib::L2CValue::L2CValue(aLStack336,_GROUND_CORRECT_KIND_GROUND_OTTOTTO);
  lib::L2CValue::L2CValue(aLStack352,aLStack160);
  lib::L2CValue::L2CValue(aLStack368,aLStack176);
  lib::L2CValue::L2CValue(aLStack384,0);
  lua2cpp::L2CFighterCommon::sub_pre_Walk_param
            (this,(L2CValue)0x0,(L2CValue)0xe0,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0,
             (L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

