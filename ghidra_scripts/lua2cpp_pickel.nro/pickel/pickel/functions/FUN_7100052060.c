
void FUN_7100052060(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  Hash40 HVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  float fVar6;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_40,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_40);
  app::lua_bind::EffectModule__set_sync_scale_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack112,0x114bf1763c);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,1.0);
  HVar2 = lib::L2CValue::as_hash(aLStack112);
  uVar3 = lib::L2CValue::as_number(param_2);
  uVar4 = lib::L2CValue::as_number(param_3);
  uVar5 = lib::L2CValue::as_number(aLStack128);
  local_40 = CONCAT44(uVar4,uVar3);
  uStack56 = (ulong)uVar5;
  uVar3 = lib::L2CValue::as_number(aLStack144);
  uVar4 = lib::L2CValue::as_number(aLStack160);
  uVar5 = lib::L2CValue::as_number(aLStack176);
  local_50 = CONCAT44(uVar4,uVar3);
  uStack72 = (ulong)uVar5;
  fVar6 = (float)lib::L2CValue::as_number(aLStack192);
  uVar5 = app::lua_bind::EffectModule__req_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar2,(Vector3f *)&local_40,
                     (Vector3f *)&local_50,fVar6,0,-1,false,0);
  lib::L2CValue::L2CValue(aLStack96,uVar5);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,true);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_40);
  app::lua_bind::EffectModule__set_sync_scale_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  return;
}

