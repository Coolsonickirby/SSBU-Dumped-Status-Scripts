
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000d470(void *param_1)

{
  int iVar1;
  Hash40 HVar2;
  L2CValue *pLVar3;
  undefined8 *puVar4;
  uint uVar5;
  float fVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  undefined auStack272 [16];
  undefined auStack256 [16];
  Hash40MapEntry **local_f0;
  ulong uStack232;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  BattleObject *pBStack72;
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue((L2CValue *)auStack256,0x31d39a761);
  lib::L2CValue::L2CValue((L2CValue *)auStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  HVar2 = lib::L2CValue::as_hash((L2CValue *)auStack256);
  uVar7 = lib::L2CValue::as_number((L2CValue *)auStack272);
  lVar8 = lib::L2CValue::as_number(aLStack288);
  uVar5 = lib::L2CValue::as_number(aLStack304);
  local_50 = (void **)(uVar7 & 0xffffffff | lVar8 << 0x20);
  pBStack72 = (BattleObject *)(ulong)uVar5;
  puVar4 = &local_50;
  app::lua_bind::ModelModule__joint_rotate_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar2,(Vector3f *)puVar4);
  lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),(float)local_50);
  pLVar3 = (L2CValue *)(auStack256 + 0x20);
  lib::L2CValue::L2CValue(pLVar3,local_50._4_4_);
  lib::L2CValue::L2CValue(aLStack208,pBStack72._0_4_);
  lib::L2CValue::operator=(aLStack96,(L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::operator=(aLStack112,pLVar3);
  lib::L2CValue::operator=(aLStack192,aLStack208);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(pLVar3);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue((L2CValue *)auStack272);
  lib::L2CValue::~L2CValue((L2CValue *)auStack256);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),0x16);
  lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator==(pLVar3,(L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    fVar6 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),fVar6);
    lib::L2CValue::operator=(aLStack128,(L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    fVar6 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),fVar6);
    pLVar3 = (L2CValue *)(auStack256 + 0x10);
    lib::L2CValue::operator=(aLStack144,pLVar3);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack128,pLVar3);
    pLVar3 = aLStack144;
    lib::L2CAgent::math_atan((L2CAgent *)auStack256,pLVar3,(L2CValue *)puVar4);
    lib::L2CAgent::math_deg((L2CAgent *)&local_50,pLVar3);
    lib::L2CValue::operator=(aLStack96,(L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),90.0);
    lib::L2CValue::operator-(aLStack96,(L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::operator=(aLStack96,(L2CValue *)&local_50);
    puVar4 = &local_50;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)auStack272,_GROUND_TOUCH_FLAG_ALL);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack272);
    uVar9 = app::lua_bind::GroundModule__get_touch_normal_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar5);
    lib::L2CValue::L2CValue(aLStack336,(float)uVar9);
    lib::L2CValue::L2CValue(aLStack320,(float)((ulong)uVar9 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),aLStack336);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack320);
    puVar4 = &local_50;
    lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x10,SUB81(puVar4,0));
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue((L2CValue *)auStack272);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack256,0x18cdc1683);
    lib::L2CValue::operator=((L2CValue *)auStack176,pLVar3);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack256,0x1fbdb2615);
    lib::L2CValue::operator=((L2CValue *)(auStack176 + 0x10),pLVar3);
    pLVar3 = (L2CValue *)(auStack176 + 0x10);
    lib::L2CAgent::math_atan((L2CAgent *)auStack176,pLVar3,(L2CValue *)puVar4);
    lib::L2CAgent::math_deg((L2CAgent *)auStack272,pLVar3);
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack288,fVar6);
    lib::L2CValue::operator*((L2CValue *)&local_50,aLStack288);
    lib::L2CValue::operator=(aLStack96,(L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)auStack272);
    puVar4 = (undefined8 *)auStack256;
  }
  lib::L2CValue::~L2CValue((L2CValue *)puVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x31d39a761);
  HVar2 = lib::L2CValue::as_hash((L2CValue *)&local_50);
  uVar7 = lib::L2CValue::as_number(aLStack96);
  lVar8 = lib::L2CValue::as_number(aLStack112);
  uVar5 = lib::L2CValue::as_number(aLStack192);
  local_f0 = (Hash40MapEntry **)(uVar7 & 0xffffffff | lVar8 << 0x20);
  uStack232 = (ulong)uVar5;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar2,
             (Vector3f *)(auStack256 + 0x10),0,0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

