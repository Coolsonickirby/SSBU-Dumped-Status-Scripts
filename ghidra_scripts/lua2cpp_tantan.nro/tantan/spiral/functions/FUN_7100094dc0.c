
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100094dc0(long param_1)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  L2CValue *pLVar4;
  uint uVar5;
  float fVar6;
  ulong uVar7;
  long lVar8;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack160,0x8e1b62b60);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,true);
  HVar3 = lib::L2CValue::as_hash(aLStack160);
  uVar7 = lib::L2CValue::as_number(aLStack176);
  lVar8 = lib::L2CValue::as_number(aLStack192);
  uVar5 = lib::L2CValue::as_number(aLStack208);
  local_50 = uVar7 & 0xffffffff | lVar8 << 0x20;
  uStack72 = (ulong)uVar5;
  bVar1 = lib::L2CValue::as_bool(aLStack224);
  app::lua_bind::ModelModule__joint_global_rotation_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar3,(Vector3f *)&local_50,
             (bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack144,(float)local_50);
  lib::L2CValue::L2CValue(aLStack128,local_50._4_4_);
  lib::L2CValue::L2CValue(aLStack112,(float)uStack72);
  FUN_710000eb70(aLStack96,param_1,aLStack144);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x162d277af);
  lib::L2CValue::L2CValue(aLStack160,pLVar4);
  fVar6 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack176,fVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,-1.0);
  uVar7 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack176);
  if ((uVar7 & 1) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x162d277af);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,180.0);
    lib::L2CValue::operator-((L2CValue *)&local_50,pLVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator=(aLStack160,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator+(aLStack160,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,
             _WEAPON_TANTAN_SPIRALLEFT_STATUS_DRAGON_WORK_ID_FLOAT_PHYSICS_TIP_ROTATE_Z);
  fVar6 = (float)lib::L2CValue::as_number(aLStack176);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6,iVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

