
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100051960(L2CFighterTantan *this,L2CValue *return_value)

{
  int iVar1;
  long lVar2;
  L2CValue *in_x1;
  L2CValue *in_x2;
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
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack240,in_x1);
  lib::L2CValue::L2CValue(aLStack256,in_x2);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  lVar2 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,lVar2);
  lib::L2CValue::L2CValue(aLStack112,0x71a99f496);
  lib::L2CValue::L2CValue(aLStack128,0x9b0ef525e);
  lib::L2CValue::L2CValue(aLStack144,aLStack240);
  lib::L2CValue::L2CValue(aLStack160,_CONTROL_PAD_BUTTON_ATTACK);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_HOLD_RATE_L);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_REINFORCE_L);
  lib::L2CValue::L2CValue
            (aLStack208,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REINFORCE_L_EFFECT_HANDLE_L);
  lib::L2CValue::L2CValue(aLStack224,aLStack256);
  FUN_7100056a80(this,aLStack64,aLStack80,aLStack112,aLStack128,aLStack144,aLStack160,aLStack176,
                 aLStack192,aLStack208,aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  return;
}

