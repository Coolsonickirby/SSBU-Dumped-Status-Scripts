
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710023acb0(L2CValue *param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  BattleObjectModuleAccessor **ppBVar6;
  L2CValue *pLVar7;
  float fVar8;
  undefined8 uVar9;
  long lVar10;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  undefined auStack160 [16];
  undefined auStack144 [32];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  BattleObjectModuleAccessor *local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack144 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack144,0);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,0);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_KIRBY_FINALCUTTERSHOT_INSTANCE_WORK_ID_FLOAT_ANGLE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar8);
  lib::L2CValue::operator=((L2CValue *)(auStack144 + 0x10),(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::operator=((L2CValue *)auStack160,(L2CValue *)(auStack144 + 0x10));
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
  ppBVar6 = &local_50;
  uVar5 = lib::L2CValue::operator==(pLVar4,(L2CValue *)ppBVar6);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,GROUND_TOUCH_FLAG_DOWN);
    uVar3 = lib::L2CValue::as_integer(aLStack96);
    uVar3 = app::lua_bind::GroundModule__is_touch_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar3);
    ppBVar6 = (BattleObjectModuleAccessor **)(ulong)(uVar3 & 1);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,SUB41(uVar3 & 1,0));
    bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack224,GROUND_TOUCH_FLAG_DOWN);
      uVar3 = lib::L2CValue::as_integer(aLStack224);
      uVar9 = app::lua_bind::GroundModule__get_touch_normal_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar3);
      lib::L2CValue::L2CValue(aLStack208,(float)uVar9);
      lib::L2CValue::L2CValue(aLStack192,(float)((ulong)uVar9 >> 0x20));
      lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack208);
      lib::L2CValue::L2CValue(aLStack96,aLStack192);
      pLVar7 = aLStack96;
      lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xb0,SUB81(pLVar7,0));
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack224);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
      lib::L2CValue::operator=((L2CValue *)auStack144,pLVar4);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
      lib::L2CValue::operator=(aLStack112,pLVar4);
      lib::L2CAgent::math_atan((L2CAgent *)auStack144,aLStack112,pLVar7);
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl
                               (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
      lib::L2CValue::L2CValue(aLStack224,fVar8);
      lib::L2CValue::operator*(aLStack96,aLStack224);
      ppBVar6 = &local_50;
      lib::L2CValue::operator=((L2CValue *)auStack160,(L2CValue *)ppBVar6);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack176);
    }
  }
  lib::L2CAgent::math_deg((L2CAgent *)auStack160,(L2CValue *)ppBVar6);
  lib::L2CAgent::math_deg((L2CAgent *)(auStack144 + 0x10),(L2CValue *)ppBVar6);
  pLVar4 = aLStack96;
  uVar5 = lib::L2CValue::operator==((L2CValue *)&local_50,pLVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
    lib::L2CAgent::math_deg((L2CAgent *)auStack160,pLVar4);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    uVar5 = lib::L2CValue::as_number(aLStack96);
    lVar10 = lib::L2CValue::as_number(aLStack176);
    uVar3 = lib::L2CValue::as_number(aLStack224);
    local_50 = (BattleObjectModuleAccessor *)(uVar5 & 0xffffffff | lVar10 << 0x20);
    uStack72 = (ulong)uVar3;
    app::lua_bind::PostureModule__set_rot_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),(Vector3f *)&local_50,0);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator+((L2CValue *)auStack160,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_WEAPON_KIRBY_FINALCUTTERSHOT_INSTANCE_WORK_ID_FLOAT_ANGLE);
    fVar8 = (float)lib::L2CValue::as_number(aLStack96);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),fVar8,iVar2);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  lib::L2CValue::~L2CValue((L2CValue *)auStack144);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack144 + 0x10));
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

