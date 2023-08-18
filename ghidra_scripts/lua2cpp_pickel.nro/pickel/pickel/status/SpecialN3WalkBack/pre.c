
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialN3WalkBack_pre(L2CFighterPickel *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  ulong uVar2;
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
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_WORK_KEEP_FLAG_ALL_FLAG);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_WORK_KEEP_FLAG_ALL_INT);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_WORK_KEEP_FLAG_ALL_FLOAT);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_N);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_TYPE_MOTION_LOOP);
  lib::L2CValue::L2CValue
            (aLStack192,
             _FIGHTER_STATUS_ATTR_DISABLE_JUMP_BOARD_EFFECT |
             _FIGHTER_STATUS_ATTR_SCALE_KINETIC_ENERGY);
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack224,pLVar1);
  FUN_710004c830(aLStack208,aLStack224);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar2 = lib::L2CValue::operator__(aLStack208,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON);
    lib::L2CValue::operator_(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::operator_(aLStack160,aLStack208);
    pLVar1 = aLStack208;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FS_SUCCEEDS_KEEP_HIT | FS_SUCCEEDS_KEEP_VISIBILITY);
    lib::L2CValue::operator_(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_SPECIAL_N3_FLAG);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_SPECIAL_N3_INT);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_SPECIAL_N3_FLOAT);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    pLVar1 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar1);
  lib::L2CValue::L2CValue(aLStack80,aLStack96);
  lib::L2CValue::L2CValue(aLStack208,aLStack112);
  lib::L2CValue::L2CValue(aLStack240,aLStack128);
  lib::L2CValue::L2CValue(aLStack256,aLStack192);
  lib::L2CValue::L2CValue(aLStack272,_GROUND_CORRECT_KIND_GROUND_OTTOTTO);
  lib::L2CValue::L2CValue(aLStack288,aLStack176);
  lib::L2CValue::L2CValue(aLStack304,aLStack144);
  lib::L2CValue::L2CValue(aLStack320,aLStack160);
  lua2cpp::L2CFighterCommon::sub_pre_Walk_param
            (this,(L2CValue)0xb0,(L2CValue)0x30,(L2CValue)0x10,(L2CValue)0x0,(L2CValue)0xf0,
             (L2CValue)0xe0,(L2CValue)0xd0,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

