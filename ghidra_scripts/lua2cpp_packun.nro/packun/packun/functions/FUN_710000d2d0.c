
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000d2d0(L2CValue *param_1,long param_2)

{
  int iVar1;
  Hash40 HVar2;
  float fVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_ANGLE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  FUN_710000d5c0(aLStack96,param_2);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,aLStack96);
  FUN_710000df20(&local_40,param_2,aLStack112,aLStack128);
  lib::L2CValue::operator=(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  FUN_7100010290(param_2);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
  lib::L2CValue::operator+(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_ANGLE);
  fVar3 = (float)lib::L2CValue::as_number(aLStack144);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar3,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_ANGLE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack96,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  HVar2 = lib::L2CValue::as_hash(aLStack96);
  uVar5 = lib::L2CValue::as_number(aLStack80);
  lVar6 = lib::L2CValue::as_number(aLStack112);
  uVar4 = lib::L2CValue::as_number(aLStack128);
  local_40 = uVar5 & 0xffffffff | lVar6 << 0x20;
  uStack56 = (ulong)uVar4;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar2,(Vector3f *)&local_40,0,0);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

