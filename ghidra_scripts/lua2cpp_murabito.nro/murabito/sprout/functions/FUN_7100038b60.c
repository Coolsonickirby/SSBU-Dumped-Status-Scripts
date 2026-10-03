
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100038b60(void *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
  undefined8 uVar9;
  long lVar10;
  undefined auStack208 [32];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong local_40;
  BattleObject *pBStack56;
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_MURABITO_SPROUT_INSTANCE_WORK_ID_FLOAT_ROT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar8);
  lib::L2CValue::operator=(aLStack96,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator==(pLVar5,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,GROUND_TOUCH_FLAG_DOWN);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),GROUND_TOUCH_FLAG_DOWN);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack208 + 0x10));
      uVar9 = app::lua_bind::GroundModule__get_touch_normal_impl
                        (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar4);
      lib::L2CValue::L2CValue(aLStack176,(float)uVar9);
      lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar9 >> 0x20));
      lib::L2CValue::L2CValue((L2CValue *)&local_40,aLStack176);
      lib::L2CValue::L2CValue(aLStack80,aLStack160);
      pLVar7 = aLStack80;
      lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xc0,SUB81(pLVar7,0));
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
      lib::L2CValue::operator=(aLStack128,pLVar5);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
      lib::L2CValue::operator=(aLStack112,pLVar5);
      pLVar5 = aLStack128;
      lib::L2CAgent::math_atan((L2CAgent *)aLStack112,pLVar5,pLVar7);
      lib::L2CAgent::math_deg((L2CAgent *)auStack208,pLVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,90.0);
      lib::L2CValue::operator-((L2CValue *)(auStack208 + 0x10),(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::operator=(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack208);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
      lib::L2CValue::operator+(aLStack96,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_40,_WEAPON_MURABITO_SPROUT_INSTANCE_WORK_ID_FLOAT_ROT);
      fVar8 = (float)lib::L2CValue::as_number(aLStack80);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar8,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
    }
  }
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  uVar6 = lib::L2CValue::as_number(aLStack80);
  lVar10 = lib::L2CValue::as_number(aLStack144);
  uVar4 = lib::L2CValue::as_number(aLStack96);
  local_40 = uVar6 & 0xffffffff | lVar10 << 0x20;
  pBStack56 = (BattleObject *)(ulong)uVar4;
  app::lua_bind::PostureModule__set_rot_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),(Vector3f *)&local_40,0);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

