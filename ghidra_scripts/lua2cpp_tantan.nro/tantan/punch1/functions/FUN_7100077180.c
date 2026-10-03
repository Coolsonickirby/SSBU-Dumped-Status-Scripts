
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100077180(void *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  MotionNodeRotateCompose MVar5;
  MotionNodeRotateOrder MVar6;
  ulong uVar7;
  void *pvVar8;
  BattleObjectModuleAccessor *pBVar9;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  Hash40 HVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
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
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_TANTAN_PUNCH1_STATUS_WORK_ID_FLOAT_DRAGON_DEGREE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar11);
  lib::L2CValue::operator-((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::LinkModule__is_link_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_LINK_NO_CONSTRAINT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    uVar4 = app::lua_bind::LinkModule__get_parent_object_id_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack112,uVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x50000000);
    uVar7 = lib::L2CValue::operator==(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar7 & 1) == 0) {
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar8 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack128,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,pvVar8);
      }
      lib::L2CValue::L2CValue
                (aLStack144,_WEAPON_TANTAN_SPIRALLEFT_STATUS_DRAGON_WORK_ID_FLAG_INIT_ROTATE_Z);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(pBVar9,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack160,_WEAPON_TANTAN_PUNCH1_STATUS_WORK_ID_FLOAT_DRAGON_ROTATE_X_DEGREE);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                                  (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar11);
        fVar11 = (float)app::lua_bind::PostureModule__lr_impl
                                  (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
        lib::L2CValue::L2CValue(aLStack176,fVar11);
        lib::L2CValue::operator*((L2CValue *)&local_50,aLStack176);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::L2CValue
                  (aLStack208,_WEAPON_TANTAN_PUNCH1_STATUS_WORK_ID_FLOAT_DRAGON_ROTATE_Y_DEGREE);
        iVar3 = lib::L2CValue::as_integer(aLStack208);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                                  (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack192,fVar11);
        fVar11 = (float)app::lua_bind::PostureModule__lr_impl
                                  (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
        lib::L2CValue::L2CValue(aLStack224,fVar11);
        lib::L2CValue::operator*(aLStack192,aLStack224);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,-1.0);
        lib::L2CValue::operator*(aLStack176,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::L2CValue
                  (aLStack208,_WEAPON_TANTAN_PUNCH1_STATUS_WORK_ID_FLOAT_INIT_PARENT_ROTATE_X);
        iVar3 = lib::L2CValue::as_integer(aLStack208);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                                  (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack192,fVar11);
        fVar11 = (float)app::lua_bind::PostureModule__lr_impl
                                  (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
        lib::L2CValue::L2CValue(aLStack224,fVar11);
        lib::L2CValue::operator*(aLStack192,aLStack224);
        lib::L2CValue::operator+((L2CValue *)&local_50,aLStack144);
        lib::L2CValue::L2CValue
                  (aLStack288,_WEAPON_TANTAN_PUNCH1_STATUS_WORK_ID_FLOAT_INIT_PARENT_ROTATE_Y);
        iVar3 = lib::L2CValue::as_integer(aLStack288);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                                  (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack272,fVar11);
        lib::L2CValue::operator+(aLStack272,aLStack160);
        lib::L2CValue::L2CValue
                  (aLStack320,
                   _WEAPON_TANTAN_SPIRALLEFT_STATUS_DRAGON_WORK_ID_FLOAT_PHYSICS_TIP_ROTATE_Z);
        iVar3 = lib::L2CValue::as_integer(aLStack320);
        pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(pBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack304,fVar11);
        lua2cpp::L2CFighterBase::Vector3__create
                  (param_1,(L2CValue)0x10,(L2CValue)0x0,(L2CValue)0xd0);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::L2CValue(aLStack192,0x42762428f);
        this = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
        this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
        this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
        lib::L2CValue::operator+(this_01,aLStack96);
        lib::L2CValue::L2CValue(aLStack224,_MOTION_NODE_ROTATE_COMPOSE_NONE);
        lib::L2CValue::L2CValue(aLStack272,_MOTION_NODE_ROTATE_ORDER_XYZ);
        HVar10 = lib::L2CValue::as_hash(aLStack192);
        uVar12 = lib::L2CValue::as_number(this);
        uVar13 = lib::L2CValue::as_number(this_00);
        uVar4 = lib::L2CValue::as_number(aLStack208);
        local_50 = CONCAT44(uVar13,uVar12);
        uStack72 = (ulong)uVar4;
        MVar5 = lib::L2CValue::as_integer(aLStack224);
        MVar6 = lib::L2CValue::as_integer(aLStack272);
        pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
        app::lua_bind::ModelModule__set_joint_rotate_impl
                  (pBVar9,HVar10,(Vector3f *)&local_50,MVar5,MVar6);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack144);
      }
      lib::L2CValue::~L2CValue(aLStack128);
    }
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

