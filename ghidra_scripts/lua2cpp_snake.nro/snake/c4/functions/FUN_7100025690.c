
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100025690(L2CValue *param_1,void *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  byte bVar1;
  bool bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  GroundTouchFlag GVar5;
  L2CValue *pLVar6;
  Weapon *pWVar7;
  L2CValue *this;
  BattleObjectModuleAccessor *pBVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  bVar1 = app::lua_bind::LinkModule__is_model_constraint_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((bVar2 & 1U) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),4);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
    pWVar7 = (Weapon *)lib::L2CValue::as_pointer(pLVar6);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_50);
    app::WeaponSpecializer_SnakeC4::detach_constraint(pWVar7,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,GROUND_CORRECT_KIND_AIR);
  GVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::GroundModule__correct_impl
            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),GVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  uVar10 = lib::L2CValue::as_number(param_3);
  lVar11 = lib::L2CValue::as_number(param_4);
  uVar9 = lib::L2CValue::as_number(param_5);
  local_50 = uVar10 & 0xffffffff | lVar11 << 0x20;
  uStack72 = (ulong)uVar9;
  app::lua_bind::PostureModule__set_pos_impl
            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),(Vector3f *)&local_50);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_SNAKE_C4_LINK_NO_STICK);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::LinkModule__is_valid_parent_shape_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack160,_WEAPON_SNAKE_C4_LINK_NO_STICK);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    uVar12 = app::lua_bind::LinkModule__get_parent_shape_center_pos_impl
                       (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack144,(float)uVar12);
    lib::L2CValue::L2CValue(aLStack128,(float)((ulong)uVar12 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack144);
    lib::L2CValue::L2CValue(aLStack96,aLStack128);
    lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    this = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    uVar10 = lib::L2CValue::as_number(pLVar6);
    uVar9 = lib::L2CValue::as_number(this);
    local_50 = uVar10 & 0xffffffff | (ulong)uVar9 << 0x20;
    uStack72 = 0;
    app::lua_bind::GroundModule__set_shape_safe_pos_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),(Vector2f *)&local_50);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  app::lua_bind::GroundModule__update_force_impl
            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
  app::lua_bind::GroundModule__test_impl(*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
  uVar9 = app::lua_bind::GroundModule__ground_touch_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack96,uVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_GROUND_TOUCH_FLAG_NONE);
  uVar10 = lib::L2CValue::operator==(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar10 & 1) == 0) {
    GVar5 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__attach_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),GVar5);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),5);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
    app::WeaponSpecializer_SnakeC4::stick_stage_rot(pBVar8);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_WEAPON_SNAKE_C4_STATUS_ESTABLISH_WALL_WORK_FLAG_STICK);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__on_flag_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(param_1,true);
  }
  else {
    lib::L2CValue::L2CValue(param_1,false);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

