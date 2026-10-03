
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100054ec0(L2CFighterTantan *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  L2CValue *in_x1;
  L2CValue *in_x2;
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
  
  lib::L2CValue::L2CValue(aLStack272,in_x1);
  lib::L2CValue::L2CValue(aLStack288,in_x2);
  lib::L2CValue::L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH1);
  uVar2 = lib::L2CValue::operator==(aLStack272,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH2);
    uVar2 = lib::L2CValue::operator==(aLStack272,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0x94859bd08);
      lib::L2CValue::operator=(aLStack96,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x93f5e8d9e);
      lib::L2CValue::operator=(aLStack96,aLStack80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x9a657dc24);
    lib::L2CValue::operator=(aLStack96,aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_R);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  lVar3 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack112,lVar3);
  lib::L2CValue::L2CValue(aLStack144,0x7e096c9f5);
  lib::L2CValue::L2CValue(aLStack160,aLStack96);
  lib::L2CValue::L2CValue(aLStack176,aLStack272);
  lib::L2CValue::L2CValue(aLStack192,CONTROL_PAD_BUTTON_SPECIAL);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_HOLD_RATE_R);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_REINFORCE_R);
  lib::L2CValue::L2CValue
            (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REINFORCE_L_EFFECT_HANDLE_R);
  lib::L2CValue::L2CValue(aLStack256,aLStack288);
  FUN_7100056a80(this,aLStack80,aLStack112,aLStack144,aLStack160,aLStack176,aLStack192,aLStack208,
                 aLStack224,aLStack240,aLStack256);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  return;
}

