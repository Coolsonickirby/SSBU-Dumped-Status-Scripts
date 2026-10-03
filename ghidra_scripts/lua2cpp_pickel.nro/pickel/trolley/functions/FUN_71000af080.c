
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000af080(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  void *pvVar7;
  float *pfVar8;
  GroundCollisionLine *pGVar9;
  L2CValue *this;
  ulong uVar10;
  float fVar11;
  undefined8 uVar12;
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
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
  
  lib::L2CValue::L2CValue
            (aLStack112,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_GENERATE_RAIL_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack304,0);
  uVar6 = lib::L2CValue::operator<(aLStack304,aLStack96);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    return;
  }
  fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),-1);
  lib::L2CValue::L2CValue(aLStack96,fVar11);
  lib::L2CValue::L2CValue(aLStack128,aLStack96);
  FUN_71000b3fa0(aLStack112,param_1,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack160,aLStack112);
  FUN_71000b4060(aLStack144,param_1,aLStack160);
  lib::L2CValue::~L2CValue(aLStack160);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  pvVar7 = (void *)app::WeaponSpecializer_PickelTrolley::get_line_on_battle_object(uVar4);
  if (pvVar7 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,pvVar7);
  }
  uVar6 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack208);
    pGVar9 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack176);
    uVar12 = app::sv_ground_collision_line::get_ground_move_vec(pGVar9);
    lib::L2CValue::L2CValue(aLStack304,(float)uVar12);
    lib::L2CValue::L2CValue(aLStack288,(float)((ulong)uVar12 >> 0x20));
    lib::L2CValue::operator=(aLStack192,aLStack304);
    lib::L2CValue::operator=(aLStack208,aLStack288);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::L2CValue
              (aLStack304,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_GENERATE_RAIL_POS_X);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack224,fVar11);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::operator+(aLStack224,aLStack192);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::operator+(aLStack256,aLStack304);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::L2CValue
              (aLStack304,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_GENERATE_RAIL_POS_X);
    fVar11 = (float)lib::L2CValue::as_number(aLStack240);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar11,iVar3);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack240);
    this = aLStack256;
  }
  else {
    bVar1 = app::lua_bind::BattleObjectWorld__is_move_impl
                      (FIGHTER_STATUS_TRANSITION_TERM_ID_CLIFF_CATCH);
    lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack304);
    lib::L2CValue::~L2CValue(aLStack304);
    if ((bVar2 & 1U) == 0) goto LAB_71000af474;
    lib::L2CValue::L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack224);
    pfVar8 = (float *)app::lua_bind::BattleObjectWorld__move_speed_impl
                                (FIGHTER_STATUS_TRANSITION_TERM_ID_CLIFF_CATCH);
    lib::L2CValue::L2CValue(aLStack304,*pfVar8);
    lib::L2CValue::L2CValue(aLStack288,pfVar8[1]);
    lib::L2CValue::L2CValue(aLStack272,pfVar8[2]);
    lib::L2CValue::operator=(aLStack192,aLStack304);
    lib::L2CValue::operator=(aLStack208,aLStack288);
    lib::L2CValue::operator=(aLStack224,aLStack272);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::L2CValue
              (aLStack304,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_GENERATE_RAIL_POS_X);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack240,fVar11);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::operator+(aLStack240,aLStack192);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::operator+(aLStack320,aLStack304);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::L2CValue
              (aLStack304,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_GENERATE_RAIL_POS_X);
    fVar11 = (float)lib::L2CValue::as_number(aLStack256);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar11,iVar3);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack320);
    this = aLStack240;
  }
  lib::L2CValue::~L2CValue(this);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
LAB_71000af474:
  lib::L2CValue::L2CValue
            (aLStack192,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_GENERATE_RAIL_INTERVAL_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  bVar1 = app::lua_bind::WorkModule__count_down_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,0);
  lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack304);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack192);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack192,0xdfbf78d6f);
    lib::L2CValue::L2CValue(aLStack208,0x16b0bad221);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    uVar10 = lib::L2CValue::as_integer(aLStack208);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar6,uVar10);
    lib::L2CValue::L2CValue(aLStack304,iVar3);
    lib::L2CValue::L2CValue
              (aLStack224,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_GENERATE_RAIL_INTERVAL_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    iVar5 = lib::L2CValue::as_integer(aLStack224);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,iVar5);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue
              (aLStack304,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_GENERATE_RAIL_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    app::lua_bind::WorkModule__dec_int_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::L2CValue
              (aLStack192,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_GENERATE_RAIL_POS_X);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack304,fVar11);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue
              (aLStack208,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_GENERATE_RAIL_POS_Y);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack192,fVar11);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::L2CValue
              (aLStack224,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_GENERATE_POWERED_RAIL);
    iVar3 = lib::L2CValue::as_integer(aLStack224);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack208);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack224);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack208,1);
      lib::L2CValue::L2CValue
                (aLStack224,
                 _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_POWERED_RAIL_BUTTON_AVAILABLE_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      iVar5 = lib::L2CValue::as_integer(aLStack224);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,iVar5);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
    }
    lib::L2CValue::L2CValue(aLStack352,aLStack176);
    lib::L2CValue::L2CValue(aLStack368,aLStack304);
    lib::L2CValue::L2CValue(aLStack384,aLStack192);
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl
                              (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack400,fVar11);
    lib::L2CValue::L2CValue(aLStack416,false);
    lib::L2CValue::L2CValue(aLStack432,false);
    lib::L2CValue::L2CValue(aLStack448,true);
    lib::L2CValue::L2CValue(aLStack464,false);
    FUN_71000b4150(aLStack336,param_1,aLStack352,aLStack368,aLStack384,aLStack400,aLStack416,
                   aLStack432,aLStack448,aLStack464);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue(aLStack448);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack304);
  }
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

