
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100007040(void *param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong local_c0;
  undefined8 uStack184;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_POPO_LINK_NO_PARTNER);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::LinkModule__is_link_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,true);
  uVar4 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack80);
    lVar1 = -0x50;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_POPO_LINK_NO_PARTNER);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::LinkModule__is_valid_parent_shape_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,true);
    uVar4 = lib::L2CValue::operator==(aLStack112,(L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      return;
    }
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x18cdc1683);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_POPO_LINK_NO_PARTNER);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    uVar8 = app::lua_bind::LinkModule__get_parent_shape_center_pos_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,(float)uVar8);
    lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar8 >> 0x20));
    lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_c0);
    lib::L2CValue::operator=(pLVar6,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x18cdc1683);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x1fbdb2615);
    uVar4 = lib::L2CValue::as_number(pLVar5);
    uVar7 = lib::L2CValue::as_number(pLVar6);
    local_c0 = uVar4 & 0xffffffff | (ulong)uVar7 << 0x20;
    uStack184 = 0;
    app::lua_bind::GroundModule__set_shape_safe_pos_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),(Vector2f *)&local_c0);
    lVar1 = -0x40;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  return;
}

