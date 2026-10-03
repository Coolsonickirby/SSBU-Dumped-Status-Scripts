
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002d650(void *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  L2CValue *pLVar6;
  L2CValue *this;
  L2CValue *this_00;
  float *pfVar7;
  Hash40 HVar8;
  float fVar9;
  ulong uVar10;
  long lVar11;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  ulong local_d0;
  ulong uStack200;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_FLAG_ALL);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_d0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    this = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x162d277af);
    pfVar7 = (float *)app::lua_bind::PostureModule__pos_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,*pfVar7);
    lib::L2CValue::L2CValue(aLStack192,pfVar7[1]);
    lib::L2CValue::L2CValue(aLStack176,pfVar7[2]);
    lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_d0);
    lib::L2CValue::operator=(this,aLStack192);
    lib::L2CValue::operator=(this_00,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
    fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack224,fVar9);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
    fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack240,fVar9);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::operator-(pLVar6,aLStack224);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    lib::L2CValue::operator-(pLVar6,aLStack240);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x162d277af);
    uVar10 = lib::L2CValue::as_number(aLStack256);
    lVar11 = lib::L2CValue::as_number(aLStack272);
    uVar3 = lib::L2CValue::as_number(pLVar6);
    local_d0 = uVar10 & 0xffffffff | lVar11 << 0x20;
    uStack200 = (ulong)uVar3;
    app::lua_bind::PostureModule__set_pos_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),(Vector3f *)&local_d0);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack272,_WEAPON_KROOL_CROWN_INSTANCE_WORK_ID_FLAG_IS_BOUND);
    iVar4 = lib::L2CValue::as_integer(aLStack272);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,false);
    uVar10 = lib::L2CValue::operator==(aLStack256,(L2CValue *)&local_d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack272);
    if ((uVar10 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,_LINK_NO_ARTICLE);
      lib::L2CValue::L2CValue(aLStack256,0x193084a015);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
      HVar8 = lib::L2CValue::as_hash(aLStack256);
      app::lua_bind::LinkModule__send_event_parents_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4,HVar8);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,_WEAPON_ANIMCMD_SOUND);
      lib::L2CValue::L2CValue(aLStack256,0xd2a34222a);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
      HVar8 = lib::L2CValue::as_hash(aLStack256);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4,HVar8,-1);
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_d0,_WEAPON_KROOL_CROWN_INSTANCE_WORK_ID_FLAG_IS_BOUND);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,_WEAPON_KINETIC_TYPE_KROOL_CROWN_BOUND);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
      app::lua_bind::KineticModule__change_kinetic_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,GROUND_CORRECT_KIND_AIR);
      GVar5 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
      app::lua_bind::GroundModule__set_correct_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),GVar5);
      lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,_WEAPON_ANIMCMD_EFFECT);
      lib::L2CValue::L2CValue(aLStack256,0xc61ff5239);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
      HVar8 = lib::L2CValue::as_hash(aLStack256);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4,HVar8,-1);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,_WEAPON_ANIMCMD_SOUND);
      lib::L2CValue::L2CValue(aLStack256,0xdb33d7390);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
      HVar8 = lib::L2CValue::as_hash(aLStack256);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4,HVar8,-1);
    }
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,_WEAPON_KROOL_CROWN_INSTANCE_WORK_ID_INT_FALL_COUNT)
  ;
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  app::lua_bind::WorkModule__inc_int_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  return;
}

