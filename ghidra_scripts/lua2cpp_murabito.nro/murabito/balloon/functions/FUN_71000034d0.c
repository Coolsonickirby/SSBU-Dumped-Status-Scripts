
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000034d0(long param_1,L2CValue *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
  float fVar10;
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
  
  lib::L2CValue::L2CValue(aLStack128,false);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__enable_shift_material_animation_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::L2CValue(aLStack160,false);
  HVar7 = lib::L2CValue::as_hash(param_2);
  fVar8 = (float)lib::L2CValue::as_number(aLStack128);
  fVar9 = (float)lib::L2CValue::as_number(aLStack144);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::MotionModule__change_motion_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7,fVar8,fVar9,(bool)(bVar1 & 1),
             0.0,false,false);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,true);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__enable_shift_material_animation_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_MURABITO_BALLOON_MOTION_PART_SET_KIND_MATERIAL);
  lib::L2CValue::L2CValue(aLStack144,0x5665648e9);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,false);
  lib::L2CValue::L2CValue(aLStack208,false);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,false);
  lib::L2CValue::L2CValue(aLStack256,false);
  lib::L2CValue::L2CValue(aLStack272,true);
  iVar6 = lib::L2CValue::as_integer(aLStack128);
  HVar7 = lib::L2CValue::as_hash(aLStack144);
  fVar8 = (float)lib::L2CValue::as_number(aLStack160);
  fVar9 = (float)lib::L2CValue::as_number(aLStack176);
  bVar1 = lib::L2CValue::as_bool(aLStack192);
  bVar2 = lib::L2CValue::as_bool(aLStack208);
  fVar10 = (float)lib::L2CValue::as_number(aLStack224);
  bVar3 = lib::L2CValue::as_bool(aLStack240);
  bVar4 = lib::L2CValue::as_bool(aLStack256);
  bVar5 = lib::L2CValue::as_bool(aLStack272);
  app::lua_bind::MotionModule__add_motion_partial_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar6,HVar7,fVar8,fVar9,
             (bool)(bVar1 & 1),(bool)(bVar2 & 1),fVar10,(bool)(bVar3 & 1),(bool)(bVar4 & 1),
             (bool)(bVar5 & 1));
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_MURABITO_BALLOON_MOTION_PART_SET_KIND_MATERIAL);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_MURABITO_BALLOON_INSTANCE_WORK_ID_INT_TEAM_COLOR);
  iVar6 = lib::L2CValue::as_integer(aLStack160);
  iVar6 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar6);
  lib::L2CValue::L2CValue(aLStack144,iVar6);
  iVar6 = lib::L2CValue::as_integer(aLStack128);
  fVar8 = (float)lib::L2CValue::as_number(aLStack144);
  app::lua_bind::MotionModule__set_frame_partial_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar6,fVar8,true);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_MURABITO_BALLOON_MOTION_PART_SET_KIND_MATERIAL);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  iVar6 = lib::L2CValue::as_integer(aLStack128);
  fVar8 = (float)lib::L2CValue::as_number(aLStack144);
  app::lua_bind::MotionModule__set_rate_partial_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar6,fVar8);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

