
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100044530(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_FLAG_STOP_MATERIAL_ANIM)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::operator!(aLStack96);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) goto LAB_710004499c;
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_FLOAT_MATERIAL_ANIME_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,fVar6);
  lib::L2CValue::operator=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_FLAG_REVERSE_MATERIAL_ANIM);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::operator!(aLStack96);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar4 = lib::L2CValue::operator<(aLStack64,aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack160,0x1bcd28aa31);
      uVar4 = lib::L2CValue::as_integer(aLStack144);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack128,fVar6);
      lib::L2CValue::L2CValue(aLStack64,59.0);
      lib::L2CValue::operator/(aLStack64,aLStack128);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::operator-(aLStack80,aLStack112);
      lib::L2CValue::operator=(aLStack80,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack64,0.0);
      uVar4 = lib::L2CValue::operator<(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,0.0);
        lib::L2CValue::operator=(aLStack80,aLStack64);
        goto LAB_71000448c8;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,59.0);
    uVar4 = lib::L2CValue::operator<(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack160,0x1af15f26d8);
      uVar4 = lib::L2CValue::as_integer(aLStack144);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack128,fVar6);
      lib::L2CValue::L2CValue(aLStack64,59.0);
      lib::L2CValue::operator/(aLStack64,aLStack128);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::operator+(aLStack80,aLStack112);
      lib::L2CValue::operator=(aLStack80,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack64,59.0);
      uVar4 = lib::L2CValue::operator<(aLStack64,aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,59.0);
        lib::L2CValue::operator=(aLStack80,aLStack64);
LAB_71000448c8:
        lib::L2CValue::~L2CValue(aLStack64);
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_MOTION_PART_SET_KIND_INK);
  lib::L2CValue::L2CValue(aLStack96,true);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  fVar6 = (float)lib::L2CValue::as_number(aLStack80);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::MotionModule__set_frame_partial_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,fVar6,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::operator+(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue
            (aLStack64,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_FLOAT_MATERIAL_ANIME_FRAME);
  fVar6 = (float)lib::L2CValue::as_number(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6,iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
LAB_710004499c:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

