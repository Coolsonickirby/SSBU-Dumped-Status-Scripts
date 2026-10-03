
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100017cb0(L2CValue *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  Hash40 HVar4;
  uint uVar5;
  float fVar6;
  ulong uVar7;
  long lVar8;
  int in_stack_fffffffffffffe74;
  undefined in_stack_fffffffffffffe7c;
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
  ulong local_70;
  ulong uStack104;
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_EFFECT_NORMAL_ON);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_EFFECT_JET_ON);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  FUN_71000163e0(aLStack128,param_2);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack160,0x119ebb5d36);
  lib::L2CValue::L2CValue(aLStack176,0x4aa784301);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,-90.0);
  lib::L2CValue::L2CValue(aLStack288,1.0);
  lib::L2CValue::L2CValue(aLStack304,false);
  lib::L2CValue::L2CValue
            (aLStack320,_EFFECT_SUB_ATTRIBUTE_SYNC_INIT_POS | _EFFECT_SUB_ATTRIBUTE_CONCLUDE_STATUS)
  ;
  HVar3 = lib::L2CValue::as_hash(aLStack160);
  HVar4 = lib::L2CValue::as_hash(aLStack176);
  uVar7 = lib::L2CValue::as_number(aLStack192);
  lVar8 = lib::L2CValue::as_number(aLStack208);
  uVar5 = lib::L2CValue::as_number(aLStack224);
  local_60 = uVar7 & 0xffffffff | lVar8 << 0x20;
  uStack88 = (ulong)uVar5;
  uVar7 = lib::L2CValue::as_number(aLStack240);
  lVar8 = lib::L2CValue::as_number(aLStack256);
  uVar5 = lib::L2CValue::as_number(aLStack272);
  local_70 = uVar7 & 0xffffffff | lVar8 << 0x20;
  uStack104 = (ulong)uVar5;
  fVar6 = (float)lib::L2CValue::as_number(aLStack288);
  bVar1 = lib::L2CValue::as_bool(aLStack304);
  uVar5 = lib::L2CValue::as_integer(aLStack320);
  uVar5 = app::lua_bind::EffectModule__req_follow_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar3,HVar4,
                     (Vector3f *)&local_60,(Vector3f *)&local_70,fVar6,(bool)(bVar1 & 1),uVar5,0,-1,
                     in_stack_fffffffffffffe74,0,(bool)in_stack_fffffffffffffe7c,false);
  lib::L2CValue::L2CValue(aLStack144,uVar5);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

