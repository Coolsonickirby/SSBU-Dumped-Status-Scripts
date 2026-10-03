
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001f360(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
  ulong *this;
  void *pvVar7;
  BattleObjectModuleAccessor *pBVar8;
  float fVar9;
  uint uVar10;
  long lVar11;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  ulong auStack240 [2];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xc3032fc81);
  lib::L2CValue::L2CValue(aLStack112,0x106f4406c1);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xc3032fc81);
  lib::L2CValue::L2CValue(aLStack128,0x103d9eced2);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xc3032fc81);
  lib::L2CValue::L2CValue(aLStack144,0x145379386a);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack128,fVar9);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_INSTANCE_WORK_ID_INT_LINK_OWNER);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) goto LAB_710001f814;
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_SIMON_COFFIN_INSTANCE_WORK_ID_FLAG_START_ROT_Y);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x50000000);
    uVar4 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) != 0) goto LAB_710001f814;
    uVar10 = lib::L2CValue::as_integer(aLStack144);
    bVar2 = app::sv_battle_object::is_null(uVar10);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
    uVar4 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) != 0) {
      uVar10 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::sv_battle_object::is_active(uVar10);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack160);
      if ((bVar1 & 1U) == 0) goto LAB_710001f814;
      uVar10 = lib::L2CValue::as_integer(aLStack144);
      pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar10);
      if (pvVar7 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack160,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack160,pvVar7);
      }
      lib::L2CValue::L2CValue
                (aLStack224,_FIGHTER_SIMON_STATUS_FINAL_WORK_ID_FLAG_START_COFFIN_ROT_Y);
      iVar3 = lib::L2CValue::as_integer(aLStack224);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(pBVar8,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack224);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_50,_WEAPON_SIMON_COFFIN_INSTANCE_WORK_ID_FLAG_START_ROT_Y);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        app::lua_bind::WorkModule__on_flag_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
        lib::L2CValue::L2CValue(aLStack224,_WEAPON_SIMON_COFFIN_INSTANCE_WORK_ID_FLOAT_ROT_Y);
        fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
        iVar3 = lib::L2CValue::as_integer(aLStack224);
        app::lua_bind::WorkModule__set_float_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),fVar9,iVar3);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
        lib::L2CValue::operator+(aLStack96,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_50,_WEAPON_SIMON_COFFIN_INSTANCE_WORK_ID_FLOAT_ROT_Y_SPEED);
        fVar9 = (float)lib::L2CValue::as_number(aLStack224);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        app::lua_bind::WorkModule__set_float_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),fVar9,iVar3);
        this = &local_50;
        goto LAB_710001f7d4;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_WEAPON_SIMON_COFFIN_INSTANCE_WORK_ID_FLOAT_ROT_Y_SPEED);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack160,fVar9);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator+(aLStack160,aLStack112);
    lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack176,aLStack160);
    lib::L2CValue::operator-(aLStack128);
    lib::L2CValue::L2CValue(aLStack208,aLStack128);
    lua2cpp::L2CFighterBase::clamp(param_2,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
    lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator+(aLStack160,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_WEAPON_SIMON_COFFIN_INSTANCE_WORK_ID_FLOAT_ROT_Y_SPEED);
    fVar9 = (float)lib::L2CValue::as_number(aLStack224);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),fVar9,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_SIMON_COFFIN_INSTANCE_WORK_ID_FLOAT_ROT_Y)
    ;
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack224,fVar9);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator+(aLStack224,aLStack160);
    lib::L2CValue::operator=(aLStack224,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator+(aLStack224,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_SIMON_COFFIN_INSTANCE_WORK_ID_FLOAT_ROT_Y)
    ;
    fVar9 = (float)lib::L2CValue::as_number((L2CValue *)auStack240);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),fVar9,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    lib::L2CValue::L2CValue((L2CValue *)auStack240,0x31d39a761);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    HVar6 = lib::L2CValue::as_hash((L2CValue *)auStack240);
    uVar4 = lib::L2CValue::as_number(aLStack256);
    lVar11 = lib::L2CValue::as_number(aLStack272);
    uVar10 = lib::L2CValue::as_number(aLStack224);
    local_50 = uVar4 & 0xffffffff | lVar11 << 0x20;
    uStack72 = (ulong)uVar10;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),HVar6,(Vector3f *)&local_50,0,
               0);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    this = auStack240;
LAB_710001f7d4:
    lib::L2CValue::~L2CValue((L2CValue *)this);
    lib::L2CValue::~L2CValue(aLStack224);
  }
  lib::L2CValue::~L2CValue(aLStack160);
LAB_710001f814:
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

