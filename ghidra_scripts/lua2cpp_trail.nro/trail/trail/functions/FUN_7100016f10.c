
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100016f10(L2CFighterCommon *param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  code *pcVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  HVar3 = app::lua_bind::MotionModule__motion_kind_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,HVar3);
  fVar6 = (float)app::lua_bind::MotionModule__frame_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar6);
  iVar2 = lib::L2CValue::as_integer(param_2);
  app::lua_bind::ComboModule__set_impl(param_1->moduleAccessor,iVar2);
  pcVar4 = (code *)lib::L2CValue::as_pointer(param_3);
  (*pcVar4)(param_1);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack80,0xd0b71815b);
  uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xd0c1c4542);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar2);
      goto LAB_7100017140;
    }
  }
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_INSTANCE_WORK_ID_FLAG_IGNORE_2ND_MOTION);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator==(aLStack144,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar3 = lib::L2CValue::as_hash(aLStack96);
    fVar6 = (float)lib::L2CValue::as_number(aLStack112);
    fVar7 = (float)lib::L2CValue::as_number(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__add_motion_2nd_impl
              (param_1->moduleAccessor,HVar3,fVar6,fVar7,(bool)(bVar1 & 1),1.0);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    fVar6 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::MotionModule__set_weight_impl(param_1->moduleAccessor,fVar6,true);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_TYPE_JUMP_AERIAL_MOTION_2ND);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar2);
LAB_7100017140:
  lib::L2CValue::~L2CValue(aLStack80);
  lua2cpp::L2CFighterCommon::sub_attack_air_uniq_process_init(param_1);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

