
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000312c0(L2CValue *param_1,void *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  Hash40 HVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,_GROUND_TOUCH_FLAG_ALL);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::GroundModule__is_wall_touch_line_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    iVar4 = 0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_LINK_NO_CONSTRAINT);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::LinkModule__is_link_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_WEAPON_LINK_NO_CONSTRAINT);
      lib::L2CValue::L2CValue(aLStack80,0x1f6c5febaa);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      HVar5 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::LinkModule__send_event_parents_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4,HVar5);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    }
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLOAT_LODGED_POS_X);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::L2CValue
              (aLStack128,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLOAT_LODGED_POS_Y);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack112,fVar6);
    fVar6 = (float)app::lua_bind::PostureModule__pos_z_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack144,fVar6);
    uVar7 = lib::L2CValue::as_number(aLStack80);
    uVar8 = lib::L2CValue::as_number(aLStack112);
    uVar3 = lib::L2CValue::as_number(aLStack144);
    local_40 = CONCAT44(uVar8,uVar7);
    uStack56 = (ulong)uVar3;
    app::lua_bind::PostureModule__set_pos_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),(Vector3f *)&local_40);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack160,_WEAPON_MURABITO_CLAYROCKET_STATUS_KIND_BURST);
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x60,(L2CValue)0x50);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    iVar4 = 1;
  }
  lib::L2CValue::L2CValue(param_1,iVar4);
  return;
}

