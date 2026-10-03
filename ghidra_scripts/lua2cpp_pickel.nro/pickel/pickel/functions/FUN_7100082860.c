
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100082860(L2CValue *param_1,void *param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  ulong uVar4;
  L2CValue *this;
  bool bVar5;
  float fVar6;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  HVar3 = app::lua_bind::MotionModule__motion_kind_partial_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack96,HVar3);
  lib::L2CValue::L2CValue(aLStack80,0x7fb997a80);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::MotionModule__is_end_partial_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar4 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) goto LAB_7100082974;
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar4 = lib::L2CValue::operator==(param_4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
LAB_7100082b7c:
      bVar5 = false;
      goto LAB_71000829e0;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INSTANCE_WORK_ID_FLAG_HAMMER);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_CONTROL_PAD_BUTTON_ATTACK_RAW);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::ControlModule__check_button_on_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar4 & 1) != 0) {
        FUN_71000833b0(param_2);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        fVar6 = (float)lib::L2CValue::as_number(aLStack96);
        app::lua_bind::MotionModule__set_frame_partial_sync_anim_cmd_revised_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2,fVar6,true);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack80);
      }
      goto LAB_7100082b7c;
    }
    lib::L2CValue::L2CValue(aLStack192,param_3);
    lib::L2CValue::L2CValue(aLStack208,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x40,(L2CValue)0x30);
    lib::L2CValue::~L2CValue(aLStack208);
    this = aLStack192;
  }
  else {
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
LAB_7100082974:
    lib::L2CValue::L2CValue(aLStack80,_FS_SUCCEEDS_KEEP_TRANSITION);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::StatusModule__set_succeeds_bit_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack160,param_3);
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x60,(L2CValue)0x50);
    lib::L2CValue::~L2CValue(aLStack176);
    this = aLStack160;
  }
  lib::L2CValue::~L2CValue(this);
  bVar5 = true;
LAB_71000829e0:
  lib::L2CValue::L2CValue(param_1,bVar5);
  return;
}

