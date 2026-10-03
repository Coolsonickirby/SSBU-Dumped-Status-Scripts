
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000406f0(undefined8 param_1,L2CFighterCommon *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  Hash40 HVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  void *pvVar8;
  BattleObjectModuleAccessor *pBVar9;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  L2CValue *this_04;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  L2CValue aLStack504 [16];
  L2CValue aLStack488 [16];
  L2CValue aLStack472 [16];
  L2CValue aLStack456 [16];
  L2CValue aLStack440 [16];
  L2CValue aLStack424 [16];
  L2CValue aLStack408 [16];
  L2CValue aLStack392 [16];
  L2CValue aLStack376 [16];
  L2CValue aLStack360 [16];
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [24];
  
  lib::L2CValue::L2CValue(aLStack168,0xaeaab5d22);
  lib::L2CValue::L2CValue(aLStack184,0.0);
  lib::L2CValue::L2CValue(aLStack200,1.0);
  lib::L2CValue::L2CValue(aLStack216,false);
  HVar4 = lib::L2CValue::as_hash(aLStack168);
  fVar10 = (float)lib::L2CValue::as_number(aLStack184);
  fVar11 = (float)lib::L2CValue::as_number(aLStack200);
  bVar1 = lib::L2CValue::as_bool(aLStack216);
  app::lua_bind::MotionModule__change_motion_impl
            (param_2->moduleAccessor,HVar4,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::~L2CValue(aLStack216);
  lib::L2CValue::~L2CValue(aLStack200);
  lib::L2CValue::~L2CValue(aLStack184);
  lib::L2CValue::~L2CValue(aLStack168);
  lib::L2CValue::L2CValue(aLStack168,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_CATCH_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack168);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack184,fVar10);
  lib::L2CValue::~L2CValue(aLStack168);
  lib::L2CValue::L2CValue(aLStack200,60.0);
  lib::L2CValue::L2CValue(aLStack168,0xb7d64dc59);
  lib::L2CValue::L2CValue(aLStack232,0x108b38b464);
  uVar5 = lib::L2CValue::as_integer(aLStack168);
  uVar6 = lib::L2CValue::as_integer(aLStack232);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(param_2->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack216,iVar2);
  lib::L2CValue::~L2CValue(aLStack232);
  lib::L2CValue::~L2CValue(aLStack168);
  pfVar7 = (float *)app::lua_bind::PostureModule__pos_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack280,*pfVar7);
  lib::L2CValue::L2CValue(aLStack264,pfVar7[1]);
  lib::L2CValue::L2CValue(aLStack248,pfVar7[2]);
  FUN_710000eb70(aLStack232,param_2,aLStack280);
  lib::L2CValue::~L2CValue(aLStack248);
  lib::L2CValue::~L2CValue(aLStack264);
  lib::L2CValue::~L2CValue(aLStack280);
  lib::L2CValue::L2CValue(aLStack168,LINK_NO_CAPTURE);
  iVar2 = lib::L2CValue::as_integer(aLStack168);
  uVar3 = app::lua_bind::LinkModule__get_node_object_id_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack296,uVar3);
  lib::L2CValue::~L2CValue(aLStack168);
  uVar3 = lib::L2CValue::as_integer(aLStack296);
  pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar3);
  if (pvVar8 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack312,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack312,pvVar8);
  }
  pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack312);
  pfVar7 = (float *)app::lua_bind::PostureModule__pos_impl(pBVar9);
  lib::L2CValue::L2CValue(aLStack376,*pfVar7);
  lib::L2CValue::L2CValue(aLStack360,pfVar7[1]);
  lib::L2CValue::L2CValue(aLStack344,pfVar7[2]);
  FUN_710000eb70(aLStack328,param_2,aLStack376);
  lib::L2CValue::~L2CValue(aLStack344);
  lib::L2CValue::~L2CValue(aLStack360);
  lib::L2CValue::~L2CValue(aLStack376);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack232,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack232,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack232,0x162d277af);
  this_02 = (L2CValue *)lib::L2CValue::operator[](aLStack328,0x18cdc1683);
  this_03 = (L2CValue *)lib::L2CValue::operator[](aLStack328,0x1fbdb2615);
  this_04 = (L2CValue *)lib::L2CValue::operator[](aLStack328,0x162d277af);
  fVar10 = (float)lib::L2CValue::as_number(this);
  fVar11 = (float)lib::L2CValue::as_number(this_00);
  fVar12 = (float)lib::L2CValue::as_number(this_01);
  fVar13 = (float)lib::L2CValue::as_number(this_02);
  fVar14 = (float)lib::L2CValue::as_number(this_03);
  fVar15 = (float)lib::L2CValue::as_number(this_04);
  fVar10 = (float)app::sv_math::vec3_distance(fVar10,fVar11,fVar12,fVar13,fVar14,fVar15);
  lib::L2CValue::L2CValue(aLStack392,fVar10);
  lib::L2CValue::L2CValue(aLStack408,0xb7d64dc59);
  lib::L2CValue::L2CValue(aLStack424,0x177c1d6807);
  uVar5 = lib::L2CValue::as_integer(aLStack408);
  uVar6 = lib::L2CValue::as_integer(aLStack424);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (param_2->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack168,fVar10);
  uVar5 = lib::L2CValue::operator<=(aLStack392,aLStack168);
  lib::L2CValue::~L2CValue(aLStack168);
  lib::L2CValue::~L2CValue(aLStack424);
  lib::L2CValue::~L2CValue(aLStack408);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack168,1.0);
    lib::L2CValue::operator=(aLStack216,aLStack168);
    lib::L2CValue::~L2CValue(aLStack168);
  }
  lib::L2CValue::~L2CValue(aLStack392);
  lib::L2CValue::~L2CValue(aLStack328);
  lib::L2CValue::~L2CValue(aLStack312);
  lib::L2CValue::~L2CValue(aLStack296);
  lib::L2CValue::~L2CValue(aLStack232);
  lib::L2CValue::operator/(aLStack184,aLStack216);
  lib::L2CValue::operator-(aLStack200,aLStack184);
  lib::L2CValue::L2CValue(aLStack312,0xc8a96ffd5);
  lib::L2CValue::L2CValue(aLStack328,0xc7099c2b6);
  FUN_71000401c0(aLStack392,param_2);
  lib::L2CValue::L2CValue(aLStack168,_FIGHTER_WAIST_SIZE_L);
  uVar5 = lib::L2CValue::operator==(aLStack392,aLStack168);
  lib::L2CValue::~L2CValue(aLStack168);
  lib::L2CValue::~L2CValue(aLStack392);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack168,0x106981525d);
    lib::L2CValue::operator=(aLStack312,aLStack168);
    lib::L2CValue::~L2CValue(aLStack168);
    lib::L2CValue::L2CValue(aLStack168,0x10938e6f3e);
    lib::L2CValue::operator=(aLStack328,aLStack168);
    lib::L2CValue::~L2CValue(aLStack168);
  }
  lib::L2CValue::L2CValue(aLStack440,aLStack312);
  lib::L2CValue::L2CValue(aLStack456,aLStack328);
  lib::L2CValue::L2CValue(aLStack472,aLStack296);
  lib::L2CValue::L2CValue(aLStack488,aLStack232);
  FUN_71000204c0(param_2,aLStack440,aLStack456,aLStack472,aLStack488);
  lib::L2CValue::~L2CValue(aLStack488);
  lib::L2CValue::~L2CValue(aLStack472);
  lib::L2CValue::~L2CValue(aLStack456);
  lib::L2CValue::~L2CValue(aLStack440);
  uVar3 = app::lua_bind::MotionModule__end_frame_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack168,uVar3);
  lib::L2CValue::operator=(aLStack200,aLStack168);
  lib::L2CValue::~L2CValue(aLStack168);
  lib::L2CValue::operator/(aLStack200,aLStack216);
  fVar10 = (float)lib::L2CValue::as_number(aLStack168);
  app::lua_bind::MotionModule__set_rate_impl(param_2->moduleAccessor,fVar10);
  lib::L2CValue::~L2CValue(aLStack168);
  lib::L2CValue::L2CValue(aLStack168,_FIGHTER_ANIMCMD_EFFECT);
  lib::L2CValue::L2CValue(aLStack392,0x1287c399ec);
  iVar2 = lib::L2CValue::as_integer(aLStack168);
  HVar4 = lib::L2CValue::as_hash(aLStack392);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl
            (param_2->moduleAccessor,iVar2,HVar4,-1);
  lib::L2CValue::~L2CValue(aLStack392);
  lib::L2CValue::~L2CValue(aLStack168);
  FUN_7100021430(param_2);
  lib::L2CValue::L2CValue(aLStack504,lua2cpp::L2CFighterCommon::status_CatchPull_Main);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(param_2,(L2CValue)0x8);
  lib::L2CValue::~L2CValue(aLStack504);
  lib::L2CValue::~L2CValue(aLStack328);
  lib::L2CValue::~L2CValue(aLStack312);
  lib::L2CValue::~L2CValue(aLStack296);
  lib::L2CValue::~L2CValue(aLStack232);
  lib::L2CValue::~L2CValue(aLStack216);
  lib::L2CValue::~L2CValue(aLStack200);
  lib::L2CValue::~L2CValue(aLStack184);
  return;
}

