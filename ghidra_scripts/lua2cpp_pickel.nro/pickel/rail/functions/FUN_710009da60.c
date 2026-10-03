
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710009da60(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  BattleObjectModuleAccessor *pBVar7;
  float fVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  undefined auStack160 [32];
  void **local_80;
  lua_State *plStack120;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar6 = (L2CValue *)(param_1 + 200);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(pLVar4,(L2CValue *)&local_80);
  lib::L2CValue::~L2CValue((L2CValue *)&local_80);
  if ((uVar5 & 1) == 0) {
    bVar1 = lib::L2CValue::operator.cast.to.bool(param_2);
    if ((bVar1 & 1U) == 0) {
      return;
    }
    pLVar4 = (L2CValue *)0x5;
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,5);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
    fVar8 = (float)app::SlopeModuleSimple::gravity_angle(pBVar7);
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    lib::L2CAgent::math_deg((L2CAgent *)aLStack80,pLVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,-1);
    lib::L2CValue::operator*((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_80);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,0.0);
    uVar5 = lib::L2CValue::as_number((L2CValue *)(auStack160 + 0x10));
    lVar11 = lib::L2CValue::as_number((L2CValue *)auStack160);
    uVar2 = lib::L2CValue::as_number(aLStack96);
    local_80 = (void **)(uVar5 & 0xffffffff | lVar11 << 0x20);
    plStack120 = (lua_State *)(ulong)uVar2;
    app::lua_bind::PostureModule__set_rot_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(Vector3f *)&local_80,0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack160);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,_WEAPON_PICKEL_RAIL_INSTANCE_WORK_ID_INT_TORCH_EFFECT_ID);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,_EFFECT_HANDLE_NULL);
    uVar5 = lib::L2CValue::operator==((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_80);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    if ((uVar5 & 1) != 0) goto LAB_710009e070;
    lib::L2CValue::L2CValue((L2CValue *)auStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    uVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
    uVar5 = lib::L2CValue::as_number((L2CValue *)auStack160);
    lVar11 = lib::L2CValue::as_number(aLStack176);
    uVar9 = lib::L2CValue::as_number(aLStack192);
    local_80 = (void **)(uVar5 & 0xffffffff | lVar11 << 0x20);
    plStack120 = (lua_State *)(ulong)uVar9;
    app::lua_bind::EffectModule__set_rot_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,(Vector3f *)&local_80);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96);
    lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),GROUND_TOUCH_FLAG_DOWN);
    uVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
    uVar10 = app::lua_bind::GroundModule__get_touch_normal_fixed_consider_gravity_impl
                       (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,(float)uVar10);
    lib::L2CValue::L2CValue(aLStack112,(float)((ulong)uVar10 >> 0x20));
    lib::L2CValue::operator=(aLStack80,(L2CValue *)&local_80);
    lib::L2CValue::operator=(aLStack96,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
    pLVar4 = aLStack96;
    lib::L2CAgent::math_atan((L2CAgent *)aLStack80,pLVar4,param_3);
    lib::L2CAgent::math_deg((L2CAgent *)&local_80,pLVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    pLVar4 = (L2CValue *)0x5;
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,5);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
    fVar8 = (float)app::SlopeModuleSimple::gravity_angle(pBVar7);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,fVar8);
    lib::L2CAgent::math_deg((L2CAgent *)auStack160,pLVar4);
    lib::L2CValue::operator+((L2CValue *)(auStack160 + 0x10),aLStack208);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,-1);
    lib::L2CValue::operator*(aLStack192,(L2CValue *)&local_80);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    uVar5 = lib::L2CValue::as_number(aLStack192);
    lVar11 = lib::L2CValue::as_number(aLStack208);
    uVar2 = lib::L2CValue::as_number(aLStack176);
    local_80 = (void **)(uVar5 & 0xffffffff | lVar11 << 0x20);
    plStack120 = (lua_State *)(ulong)uVar2;
    app::lua_bind::PostureModule__set_rot_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(Vector3f *)&local_80,0);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,_WEAPON_PICKEL_RAIL_INSTANCE_WORK_ID_INT_TORCH_EFFECT_ID);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack192,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,_EFFECT_HANDLE_NULL);
    uVar5 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_80);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,-1);
      lib::L2CValue::operator*((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_80);
      lib::L2CValue::~L2CValue((L2CValue *)&local_80);
      lib::L2CValue::operator-(aLStack256);
      uVar2 = lib::L2CValue::as_integer(aLStack192);
      uVar5 = lib::L2CValue::as_number(aLStack208);
      lVar11 = lib::L2CValue::as_number(aLStack224);
      uVar9 = lib::L2CValue::as_number(aLStack240);
      local_80 = (void **)(uVar5 & 0xffffffff | lVar11 << 0x20);
      plStack120 = (lua_State *)(ulong)uVar9;
      app::lua_bind::EffectModule__set_rot_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,(Vector3f *)&local_80);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
    }
    lib::L2CValue::L2CValue
              (aLStack208,_WEAPON_PICKEL_RAIL_INSTANCE_WORK_ID_INT_TORCH_FLASH_EFFECT_ID);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar3);
    lib::L2CValue::operator=(aLStack192,(L2CValue *)&local_80);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,_EFFECT_HANDLE_NULL);
    uVar5 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_80);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,-1);
      lib::L2CValue::operator*((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_80);
      lib::L2CValue::~L2CValue((L2CValue *)&local_80);
      lib::L2CValue::operator-(aLStack256);
      uVar2 = lib::L2CValue::as_integer(aLStack192);
      uVar5 = lib::L2CValue::as_number(aLStack208);
      lVar11 = lib::L2CValue::as_number(aLStack224);
      uVar9 = lib::L2CValue::as_number(aLStack240);
      local_80 = (void **)(uVar5 & 0xffffffff | lVar11 << 0x20);
      plStack120 = (lua_State *)(ulong)uVar9;
      app::lua_bind::EffectModule__set_rot_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,(Vector3f *)&local_80);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
    }
  }
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
LAB_710009e070:
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

