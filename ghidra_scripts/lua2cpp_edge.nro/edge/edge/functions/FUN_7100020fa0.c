
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100020fa0(L2CValue *param_1,undefined8 param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  Hash40 HVar7;
  Hash40 HVar8;
  BattleObjectModuleAccessor *pBVar9;
  uint uVar10;
  float fVar11;
  long lVar12;
  int in_stack_fffffffffffffe24;
  undefined in_stack_fffffffffffffe2c;
  L2CValue aLStack400 [16];
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
  ulong local_a0;
  ulong uStack152;
  ulong local_90;
  ulong uStack136;
  
  FUN_710001ffe0(aLStack176);
  lib::L2CValue::L2CValue(param_1,_EFFECT_HANDLE_NULL);
  uVar6 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,false);
    lib::L2CValue::L2CValue(aLStack304,EFFECT_SUB_ATTRIBUTE_NONE);
    lib::L2CValue::L2CValue(aLStack320,0);
    lib::L2CValue::L2CValue(aLStack336,-1);
    lib::L2CValue::L2CValue(aLStack352,_EFFECT_FLIP_NONE);
    lib::L2CValue::L2CValue(aLStack368,0);
    lib::L2CValue::L2CValue(aLStack384,false);
    lib::L2CValue::L2CValue(aLStack400,false);
    HVar7 = lib::L2CValue::as_hash(param_3);
    HVar8 = lib::L2CValue::as_hash(param_4);
    uVar6 = lib::L2CValue::as_number(aLStack208);
    lVar12 = lib::L2CValue::as_number(param_5);
    uVar10 = lib::L2CValue::as_number(aLStack224);
    local_90 = uVar6 & 0xffffffff | lVar12 << 0x20;
    uStack136 = (ulong)uVar10;
    uVar6 = lib::L2CValue::as_number(aLStack240);
    lVar12 = lib::L2CValue::as_number(aLStack256);
    uVar10 = lib::L2CValue::as_number(aLStack272);
    local_a0 = uVar6 & 0xffffffff | lVar12 << 0x20;
    uStack152 = (ulong)uVar10;
    fVar11 = (float)lib::L2CValue::as_number(param_6);
    bVar1 = lib::L2CValue::as_bool(aLStack288);
    uVar10 = lib::L2CValue::as_integer(aLStack304);
    iVar3 = lib::L2CValue::as_integer(aLStack320);
    iVar4 = lib::L2CValue::as_integer(aLStack336);
    iVar5 = lib::L2CValue::as_integer(aLStack352);
    bVar2 = (bool)lib::L2CValue::as_integer(aLStack368);
    lib::L2CValue::as_bool(aLStack384);
    lib::L2CValue::as_bool(aLStack400);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack176);
    uVar10 = app::lua_bind::EffectModule__req_follow_impl
                       (pBVar9,HVar7,HVar8,(Vector3f *)&local_90,(Vector3f *)&local_a0,fVar11,
                        (bool)(bVar1 & 1),uVar10,iVar3,iVar4,in_stack_fffffffffffffe24,iVar5,
                        (bool)in_stack_fffffffffffffe2c,bVar2);
    lib::L2CValue::L2CValue(aLStack192,uVar10);
    lib::L2CValue::operator=(param_1,aLStack192);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
  }
  lib::L2CValue::~L2CValue(aLStack176);
  return;
}

