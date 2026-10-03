
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100006b20(void *param_1)

{
  byte bVar1;
  int iVar2;
  LinkAttribute LVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  Hash40 HVar8;
  uint uVar9;
  float fVar10;
  long lVar11;
  L2CValue aLStack240 [16];
  ulong local_e0;
  ulong uStack216;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  undefined8 local_70;
  ulong uStack104;
  
  bVar1 = app::lua_bind::LinkModule__is_model_constraint_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,false);
  uVar4 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x162d277af);
    lib::L2CValue::L2CValue(aLStack240,0x570211ebd);
    this = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
    this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x162d277af);
    HVar8 = lib::L2CValue::as_hash(aLStack240);
    uVar4 = lib::L2CValue::as_number(this);
    lVar11 = lib::L2CValue::as_number(this_00);
    uVar9 = lib::L2CValue::as_number(this_01);
    local_70 = uVar4 & 0xffffffff | lVar11 << 0x20;
    uStack104 = (ulong)uVar9;
    app::lua_bind::ModelModule__joint_global_position_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar8,(Vector3f *)&local_70,
               true);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,(float)local_70);
    lib::L2CValue::L2CValue(aLStack208,local_70._4_4_);
    lib::L2CValue::L2CValue(aLStack192,(float)uStack104);
    lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_e0);
    lib::L2CValue::operator=(pLVar6,aLStack208);
    lib::L2CValue::operator=(pLVar7,aLStack192);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::~L2CValue(aLStack240);
    fVar10 = (float)app::lua_bind::GroundModule__get_z_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,fVar10);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x162d277af);
    lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_e0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    app::lua_bind::LinkModule__remove_model_constraint_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),true);
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_POPO_LINK_NO_PARTNER);
    iVar2 = lib::L2CValue::as_integer(aLStack240);
    bVar1 = app::lua_bind::LinkModule__is_link_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,true);
    uVar4 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_e0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack240);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_POPO_LINK_NO_PARTNER);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_LINK_ATTRIBUTE_REFERENCE_PARENT_SLOW);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
      LVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::LinkModule__set_attribute_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2,LVar3,true);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x162d277af);
    uVar4 = lib::L2CValue::as_number(pLVar5);
    lVar11 = lib::L2CValue::as_number(pLVar6);
    uVar9 = lib::L2CValue::as_number(pLVar7);
    local_e0 = uVar4 & 0xffffffff | lVar11 << 0x20;
    uStack216 = (ulong)uVar9;
    app::lua_bind::PostureModule__set_pos_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),(Vector3f *)&local_e0);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  return;
}

