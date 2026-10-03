
/* WARNING: Could not reconcile some variable overlaps */

void FUN_710003bec0(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  L2CTable *this;
  L2CValue *pLVar3;
  Hash40 HVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  uint uVar10;
  float fVar11;
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
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
  undefined8 local_a0;
  ulong uStack152;
  long *local_80;
  L2CValue aLStack112 [16];
  
  local_80 = &local_a0;
  local_a0 = &PTR_LAB_7100157308;
  puVar2 = (undefined8 *)operator.new(0x40);
  puVar8 = puVar2 + 2;
  *puVar8 = &PTR_LAB_7100157308;
  *puVar2 = puVar8;
  *(undefined4 *)(puVar2 + 1) = 0;
  puVar2[6] = puVar8;
  lib::L2CValue::L2CValue(aLStack112,(L2CInnerFunctionBase *)puVar2);
  if (&local_a0 == local_80) {
    pcVar9 = *(code **)(*local_80 + 0x20);
LAB_710003bf58:
    (*pcVar9)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar9 = *(code **)(*local_80 + 0x28);
    goto LAB_710003bf58;
  }
  local_80 = &local_a0;
  local_a0 = &PTR_LAB_7100157350;
  puVar2 = (undefined8 *)operator.new(0x40);
  puVar8 = puVar2 + 2;
  *puVar8 = &PTR_LAB_7100157350;
  *puVar2 = puVar8;
  *(undefined4 *)(puVar2 + 1) = 0;
  puVar2[6] = puVar8;
  lib::L2CValue::L2CValue(aLStack176,(L2CInnerFunctionBase *)puVar2);
  if (&local_a0 == local_80) {
    pcVar9 = *(code **)(*local_80 + 0x20);
LAB_710003bfc0:
    (*pcVar9)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar9 = *(code **)(*local_80 + 0x28);
    goto LAB_710003bfc0;
  }
  lib::L2CValue::L2CValue(aLStack208,aLStack112);
  lib::L2CValue::L2CValue(aLStack224,aLStack176);
  this = (L2CTable *)operator.new(0x48);
  lib::L2CTable::L2CTable(this,2);
  lib::L2CValue::L2CValue(aLStack192,this);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack192,1);
  lib::L2CValue::operator=(pLVar3,aLStack208);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack192,2);
  lib::L2CValue::operator=(pLVar3,aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack304,0x33b1871dd);
  lib::L2CValue::L2CValue(aLStack320,0);
  lib::L2CValue::L2CValue(aLStack336,0);
  lib::L2CValue::L2CValue(aLStack352,0);
  HVar4 = lib::L2CValue::as_hash(aLStack304);
  local_a0._0_4_ = (float)lib::L2CValue::as_number(aLStack320);
  local_a0._4_4_ = (float)lib::L2CValue::as_number(aLStack336);
  uVar10 = lib::L2CValue::as_number(aLStack352);
  uStack152 = (ulong)uVar10;
  app::lua_bind::ModelModule__joint_global_position_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar4,(Vector3f *)&local_a0,true);
  lib::L2CValue::L2CValue(aLStack288,(float)local_a0);
  lib::L2CValue::L2CValue(aLStack272,local_a0._4_4_);
  lib::L2CValue::L2CValue(aLStack256,(float)uStack152);
  FUN_710001de50(aLStack240,param_2,aLStack288);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0);
  uVar5 = lib::L2CValue::operator<((L2CValue *)&local_a0,param_4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xdec0a3c43);
    lib::L2CValue::L2CValue(aLStack320,0x8d8ad1dd1);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    uVar6 = lib::L2CValue::as_integer(aLStack320);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack304,fVar11);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xdec0a3c43);
    lib::L2CValue::L2CValue(aLStack336,0x58c1a452f);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    uVar6 = lib::L2CValue::as_integer(aLStack336);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack320,fVar11);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
    lib::L2CValue::operator+(pLVar3,aLStack304);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,2.0);
    lib::L2CValue::operator/(aLStack320,(L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::operator-(aLStack352,aLStack368);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
    lib::L2CValue::operator+(pLVar3,aLStack304);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,2.0);
    lib::L2CValue::operator/(aLStack320,(L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::operator+(aLStack368,aLStack384);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl
                              (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack368,fVar11);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack192,param_4);
    uVar5 = lib::L2CValue::operator==(pLVar3,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
    if ((uVar5 & 1) == 0) {
      uVar7 = lib::L2CValue::operator[](aLStack192,param_4);
      lib::L2CValue::L2CValue(aLStack400,aLStack336);
      lib::L2CValue::L2CValue(aLStack416,aLStack352);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,-1.0);
      uVar5 = lib::L2CValue::operator==(aLStack368,(L2CValue *)&local_a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::operator-((L2CValue *)&FIGHTER_PAD_CMD_CAT1_JUMP);
      }
      else {
        pLVar3 = (L2CValue *)lib::L2CValue::operator[](param_3,0x47a67e768);
        lib::L2CValue::L2CValue(aLStack432,pLVar3);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,1.0);
      uVar5 = lib::L2CValue::operator==(aLStack368,(L2CValue *)&local_a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      if ((uVar5 & 1) == 0) {
        puVar2 = &FIGHTER_PAD_CMD_CAT1_JUMP;
      }
      else {
        puVar2 = (undefined8 *)lib::L2CValue::operator[](param_3,0x5b4ca7514);
      }
      lib::L2CValue::L2CValue(aLStack448,(L2CValue *)puVar2);
      FUN_710003cb50(aLStack384,uVar7,aLStack400,aLStack416,aLStack432,aLStack448);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack384);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack400);
      if ((bVar1 & 1U) == 0) goto LAB_710003c470;
      lib::L2CValue::L2CValue(param_1,true);
      bVar1 = false;
    }
    else {
LAB_710003c470:
      bVar1 = true;
    }
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
    if (!bVar1) goto LAB_710003c78c;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0);
  uVar5 = lib::L2CValue::operator<((L2CValue *)&local_a0,param_5);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xdec0a3c43);
    lib::L2CValue::L2CValue(aLStack320,0x8afaa2d47);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    uVar6 = lib::L2CValue::as_integer(aLStack320);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack304,fVar11);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xdec0a3c43);
    lib::L2CValue::L2CValue(aLStack336,0x6f54de50f);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    uVar6 = lib::L2CValue::as_integer(aLStack336);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack320,fVar11);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
    lib::L2CValue::operator+(pLVar3,aLStack304);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,2.0);
    lib::L2CValue::operator/(aLStack320,(L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::operator-(aLStack352,aLStack368);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
    lib::L2CValue::operator+(pLVar3,aLStack304);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,2.0);
    lib::L2CValue::operator/(aLStack320,(L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::operator+(aLStack368,aLStack384);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack192,param_5);
    uVar5 = lib::L2CValue::operator==(pLVar3,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
    if ((uVar5 & 1) == 0) {
      uVar7 = lib::L2CValue::operator[](aLStack192,param_5);
      lib::L2CValue::L2CValue(aLStack464,aLStack336);
      lib::L2CValue::L2CValue(aLStack480,aLStack352);
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](param_3,0x6895f72a4);
      lib::L2CValue::L2CValue(aLStack496,pLVar3);
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](param_3,0x31ed91fca);
      lib::L2CValue::L2CValue(aLStack512,pLVar3);
      FUN_710003cb50(&local_a0,uVar7,aLStack464,aLStack480,aLStack496,aLStack512);
      bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::~L2CValue(aLStack512);
      lib::L2CValue::~L2CValue(aLStack496);
      lib::L2CValue::~L2CValue(aLStack480);
      lib::L2CValue::~L2CValue(aLStack464);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(param_1,true);
        lib::L2CValue::~L2CValue(aLStack352);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack304);
        goto LAB_710003c78c;
      }
    }
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
  }
  lib::L2CValue::L2CValue(param_1,false);
LAB_710003c78c:
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

