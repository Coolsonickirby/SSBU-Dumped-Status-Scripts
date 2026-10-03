
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002b4c0(void *param_1,undefined8 param_2,ulong *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  float *pfVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  float fVar8;
  undefined8 uVar9;
  long lVar10;
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
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
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  void **local_50;
  lua_State *plStack72;
  
  iVar2 = app::lua_bind::GroundModule__get_touch_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
  uVar4 = lib::L2CValue::operator==(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) != 0) goto LAB_710002bef0;
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,GROUND_TOUCH_FLAG_DOWN);
  lib::L2CValue::operator&(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_GROUND_TOUCH_FLAG_UP);
    lib::L2CValue::operator&(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack240,_GROUND_TOUCH_FLAG_UP);
      uVar3 = lib::L2CValue::as_integer(aLStack240);
      pfVar5 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl
                                  (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3);
      lib::L2CValue::L2CValue(aLStack320,*pfVar5);
      lib::L2CValue::L2CValue(aLStack304,pfVar5[1]);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack320);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack304);
      lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack288,_GROUND_TOUCH_FLAG_UP);
      uVar3 = lib::L2CValue::as_integer(aLStack288);
      uVar9 = app::lua_bind::GroundModule__get_touch_normal_impl
                        (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3);
      lib::L2CValue::L2CValue(aLStack352,(float)uVar9);
      lib::L2CValue::L2CValue(aLStack336,(float)((ulong)uVar9 >> 0x20));
      lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack352);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack336);
      param_3 = &local_60;
      lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xb0,SUB81(param_3,0));
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack288);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
      lib::L2CValue::operator=(aLStack128,pLVar6);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
      lib::L2CValue::operator=(aLStack144,pLVar6);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
      lib::L2CValue::operator=(aLStack160,pLVar6);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
      lib::L2CValue::operator=(aLStack176,pLVar6);
      goto LAB_710002bd20;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_GROUND_TOUCH_FLAG_LEFT);
    lib::L2CValue::operator&(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack240,_GROUND_TOUCH_FLAG_LEFT);
      uVar3 = lib::L2CValue::as_integer(aLStack240);
      pfVar5 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl
                                  (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3);
      lib::L2CValue::L2CValue(aLStack384,*pfVar5);
      lib::L2CValue::L2CValue(aLStack368,pfVar5[1]);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack384);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack368);
      lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack288,_GROUND_TOUCH_FLAG_LEFT);
      uVar3 = lib::L2CValue::as_integer(aLStack288);
      uVar9 = app::lua_bind::GroundModule__get_touch_normal_impl
                        (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3);
      lib::L2CValue::L2CValue(aLStack416,(float)uVar9);
      lib::L2CValue::L2CValue(aLStack400,(float)((ulong)uVar9 >> 0x20));
      lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack416);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack400);
      param_3 = &local_60;
      lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xb0,SUB81(param_3,0));
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack288);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
      lib::L2CValue::operator=(aLStack128,pLVar6);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
      lib::L2CValue::operator=(aLStack144,pLVar6);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
      lib::L2CValue::operator=(aLStack160,pLVar6);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
      lib::L2CValue::operator=(aLStack176,pLVar6);
      goto LAB_710002bd20;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_50,GROUND_TOUCH_FLAG_RIGHT);
    lib::L2CValue::operator&(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack240,GROUND_TOUCH_FLAG_RIGHT);
      uVar3 = lib::L2CValue::as_integer(aLStack240);
      pfVar5 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl
                                  (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3);
      lib::L2CValue::L2CValue(aLStack448,*pfVar5);
      lib::L2CValue::L2CValue(aLStack432,pfVar5[1]);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack448);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack432);
      lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack288,GROUND_TOUCH_FLAG_RIGHT);
      uVar3 = lib::L2CValue::as_integer(aLStack288);
      uVar9 = app::lua_bind::GroundModule__get_touch_normal_impl
                        (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3);
      lib::L2CValue::L2CValue(aLStack480,(float)uVar9);
      lib::L2CValue::L2CValue(aLStack464,(float)((ulong)uVar9 >> 0x20));
      lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack480);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack464);
      param_3 = &local_60;
      lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xb0,SUB81(param_3,0));
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack464);
      lib::L2CValue::~L2CValue(aLStack480);
      lib::L2CValue::~L2CValue(aLStack288);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
      lib::L2CValue::operator=(aLStack128,pLVar6);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
      lib::L2CValue::operator=(aLStack144,pLVar6);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
      lib::L2CValue::operator=(aLStack160,pLVar6);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
      lib::L2CValue::operator=(aLStack176,pLVar6);
      goto LAB_710002bd20;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack240,GROUND_TOUCH_FLAG_DOWN);
    uVar3 = lib::L2CValue::as_integer(aLStack240);
    pfVar5 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3);
    lib::L2CValue::L2CValue(aLStack224,*pfVar5);
    lib::L2CValue::L2CValue(aLStack208,pfVar5[1]);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack224);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack208);
    lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack288,GROUND_TOUCH_FLAG_DOWN);
    uVar3 = lib::L2CValue::as_integer(aLStack288);
    uVar9 = app::lua_bind::GroundModule__get_touch_normal_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3);
    lib::L2CValue::L2CValue(aLStack272,(float)uVar9);
    lib::L2CValue::L2CValue(aLStack256,(float)((ulong)uVar9 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack272);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack256);
    param_3 = &local_60;
    lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xb0,SUB81(param_3,0));
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack288);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
    lib::L2CValue::operator=(aLStack128,pLVar6);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
    lib::L2CValue::operator=(aLStack144,pLVar6);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
    lib::L2CValue::operator=(aLStack160,pLVar6);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
    lib::L2CValue::operator=(aLStack176,pLVar6);
LAB_710002bd20:
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack192);
  }
  lib::L2CValue::operator-(aLStack160);
  lib::L2CAgent::math_atan((L2CAgent *)&local_50,aLStack176,(L2CValue *)param_3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack240,0x92a3b5b68);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack512,0.0);
  lib::L2CValue::L2CValue(aLStack528,0.0);
  lib::L2CValue::L2CValue(aLStack544,1.0);
  lib::L2CValue::L2CValue(aLStack560,EFFECT_SUB_ATTRIBUTE_NONE);
  lib::L2CValue::L2CValue(aLStack576,-1);
  HVar7 = lib::L2CValue::as_hash(aLStack240);
  uVar4 = lib::L2CValue::as_number(aLStack128);
  lVar10 = lib::L2CValue::as_number(aLStack144);
  uVar3 = lib::L2CValue::as_number(aLStack288);
  local_50 = (void **)(uVar4 & 0xffffffff | lVar10 << 0x20);
  plStack72 = (lua_State *)(ulong)uVar3;
  uVar4 = lib::L2CValue::as_number(aLStack512);
  lVar10 = lib::L2CValue::as_number(aLStack528);
  uVar3 = lib::L2CValue::as_number(aLStack192);
  local_60 = uVar4 & 0xffffffff | lVar10 << 0x20;
  uStack88 = (ulong)uVar3;
  fVar8 = (float)lib::L2CValue::as_number(aLStack544);
  uVar3 = lib::L2CValue::as_integer(aLStack560);
  iVar2 = lib::L2CValue::as_integer(aLStack576);
  uVar3 = app::lua_bind::EffectModule__req_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar7,
                     (Vector3f *)&local_50,(Vector3f *)&local_60,fVar8,uVar3,iVar2,false,0);
  lib::L2CValue::L2CValue(aLStack496,uVar3);
  lib::L2CValue::~L2CValue(aLStack496);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::~L2CValue(aLStack560);
  lib::L2CValue::~L2CValue(aLStack544);
  lib::L2CValue::~L2CValue(aLStack528);
  lib::L2CValue::~L2CValue(aLStack512);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
LAB_710002bef0:
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

