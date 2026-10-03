
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000025e0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined8 param_5,L2CAgent *param_6,L2CValue *param_7,L2CValue *param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  float *pfVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  L2CValue *this_04;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 uVar10;
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
  undefined4 local_f0;
  undefined4 uStack236;
  undefined4 local_e8;
  undefined4 uStack228;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  undefined8 local_a0;
  undefined8 uStack152;
  undefined8 local_90;
  undefined8 uStack136;
  undefined8 local_80;
  undefined8 uStack120;
  
  lib::L2CAgent::clear_lua_stack(param_6);
  local_f0 = app::sv_camera_manager::dead_range(param_6->luaStateAgent);
  uStack236 = param_2;
  local_e8 = param_3;
  uStack228 = param_4;
  app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)&local_f0);
  iVar2 = app::sv_information::stage_id();
  lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,_function_phase_init_for_ground);
  uVar4 = lib::L2CValue::operator==((L2CValue *)&local_80,(L2CValue *)&local_f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_80);
  if ((uVar4 & 1) != 0) {
    bVar1 = app::lua_bind::GroundModule__is_ignore_fighter_other_impl(param_6->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,false);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_f0);
    app::lua_bind::GroundModule__set_ignore_fighter_other_impl
              (param_6->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_LINK_NO_CONSTRAINT);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar1 = app::lua_bind::LinkModule__is_link_impl(param_6->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,true);
    uVar4 = lib::L2CValue::operator==((L2CValue *)&local_80,(L2CValue *)&local_f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue((L2CValue *)&local_90);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::L2CValue(aLStack256,_WEAPON_LINK_NO_CONSTRAINT);
      iVar2 = lib::L2CValue::as_integer(aLStack256);
      pfVar5 = (float *)app::lua_bind::LinkModule__get_parent_pos_impl
                                  (param_6->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,*pfVar5);
      lib::L2CValue::L2CValue(aLStack224,pfVar5[1]);
      lib::L2CValue::L2CValue(aLStack208,pfVar5[2]);
      lib::L2CValue::operator=((L2CValue *)&local_80,(L2CValue *)&local_f0);
      lib::L2CValue::operator=((L2CValue *)&local_90,aLStack224);
      lib::L2CValue::operator=((L2CValue *)&local_a0,aLStack208);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
      lib::L2CValue::~L2CValue(aLStack256);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](param_7,0x18cdc1683);
      lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_80);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    }
    lib::L2CValue::operator-(param_8,param_7);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(param_6,(L2CValue)0xe0,(L2CValue)0xd0);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::L2CValue(aLStack320,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x1fbdb2615);
    this = (L2CValue *)lib::L2CValue::operator[](param_7,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator[](param_7,0x1fbdb2615);
    this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
    this_02 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
    this_03 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x18cdc1683);
    this_04 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack336,_FLAG_IGNORE_FIGHTER_OTHER);
    lib::L2CValue::L2CValue(aLStack352,true);
    uVar9 = lib::L2CValue::as_number(this);
    uVar10 = lib::L2CValue::as_number(this_00);
    local_80 = CONCAT44(uVar10,uVar9);
    uStack120 = 0;
    uVar9 = lib::L2CValue::as_number(this_01);
    uVar10 = lib::L2CValue::as_number(this_02);
    local_90 = CONCAT44(uVar10,uVar9);
    uStack136 = 0;
    uVar9 = lib::L2CValue::as_number(this_03);
    uVar10 = lib::L2CValue::as_number(this_04);
    local_a0 = CONCAT44(uVar10,uVar9);
    uStack152 = 0;
    uVar3 = lib::L2CValue::as_integer(aLStack336);
    bVar1 = lib::L2CValue::as_bool(aLStack352);
    pvVar8 = (void *)app::lua_bind::GroundModule__ray_check_get_line_hit_pos_target_any_impl
                               (param_6->moduleAccessor,(Vector2f *)&local_80,(Vector2f *)&local_90,
                                (Vector2f *)&local_a0,uVar3,(bool)(bVar1 & 1));
    if (pvVar8 == (void *)0x0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,pvVar8);
    }
    lib::L2CValue::L2CValue(aLStack224,(float)local_a0);
    lib::L2CValue::L2CValue(aLStack208,local_a0._4_4_);
    lib::L2CValue::operator=(aLStack320,(L2CValue *)&local_f0);
    lib::L2CValue::operator=(pLVar6,aLStack224);
    lib::L2CValue::operator=(pLVar7,aLStack208);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    uVar4 = lib::L2CValue::operator==(aLStack320,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    if ((uVar4 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x18cdc1683);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](param_8,0x18cdc1683);
      lib::L2CValue::operator=(pLVar7,pLVar6);
    }
    bVar1 = lib::L2CValue::as_bool(aLStack192);
    app::lua_bind::GroundModule__set_ignore_fighter_other_impl
              (param_6->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack192);
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](param_8,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack368,pLVar6);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x47a67e768);
  lib::L2CValue::L2CValue(aLStack384,pLVar6);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x5b4ca7514);
  lib::L2CValue::L2CValue(aLStack400,pLVar6);
  lua2cpp::L2CFighterBase::clamp(param_6,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack176);
  return;
}

