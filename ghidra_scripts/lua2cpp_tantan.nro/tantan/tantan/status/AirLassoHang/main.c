
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AirLassoHang_main(L2CFighterTantan *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  HitStatus HVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  Article *pAVar9;
  BattleObjectModuleAccessor *pBVar10;
  ulong uVar11;
  Hash40 HVar12;
  L2CValue *this_00;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
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
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x59a6ef56c);
  lib::L2CValue::L2CValue(aLStack96,0xadd214353);
  lVar5 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  lVar6 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar5,lVar6);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x71a99f496);
  lib::L2CValue::L2CValue(aLStack96,0xcec1191d4);
  lVar5 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  lVar6 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar5,lVar6);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack96,0xdf7ec6d94);
  lib::L2CValue::L2CValue(aLStack112,0x1463aa7017);
  lib::L2CValue::L2CValue(aLStack128,true);
  FUN_71000279c0(&local_50,this,aLStack96,aLStack112,aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  pvVar7 = (void *)app::lua_bind::ArticleModule__get_article_impl(this->moduleAccessor,iVar2);
  if (pvVar7 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack96,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,pvVar7);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  uVar8 = lib::L2CValue::operator__
                    (aLStack96,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  if ((uVar8 & 1) == 0) {
    pAVar9 = (Article *)lib::L2CValue::as_pointer(aLStack96);
    uVar3 = app::lua_bind::Article__get_battle_object_id_impl(pAVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,uVar3);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar3);
    if (pvVar7 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack112,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,pvVar7);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_TANTAN_SPIRALLEFT_GENERATE_ARTICLE_PUNCH1)
    ;
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
    pvVar7 = (void *)app::lua_bind::ArticleModule__get_article_impl(pBVar10,iVar2);
    if (pvVar7 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack128,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,pvVar7);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    uVar8 = lib::L2CValue::operator__
                      (aLStack128,
                       (L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    if ((uVar8 & 1) == 0) {
      pAVar9 = (Article *)lib::L2CValue::as_pointer(aLStack128);
      uVar3 = app::lua_bind::Article__get_battle_object_id_impl(pAVar9);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,uVar3);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar3);
      if (pvVar7 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack144,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      }
      else {
        lib::L2CValue::L2CValue(aLStack144,pvVar7);
      }
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_LASSO_INSTANCE_WORK_ID_FLAG_CLIFF_SET);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(pBVar10,iVar2);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
      uVar3 = app::lua_bind::LinkModule__get_model_constraint_flag_impl(pBVar10);
      lib::L2CValue::L2CValue(aLStack160,uVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,CONSTRAINT_FLAG_OFFSET_ROT);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_CONSTRAINT_FLAG_MTX);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::operator_(aLStack160,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      uVar3 = lib::L2CValue::as_integer(aLStack160);
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
      app::lua_bind::LinkModule__set_model_constraint_flag_impl(pBVar10,uVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0xcb4cf0e97);
      lib::L2CValue::L2CValue(aLStack192,0x10d7f346ed);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      uVar11 = lib::L2CValue::as_integer(aLStack192);
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
      fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar10,uVar8,uVar11);
      lib::L2CValue::L2CValue(aLStack176,fVar13);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0xcb4cf0e97);
      lib::L2CValue::L2CValue(aLStack208,0x10a0f4767b);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      uVar11 = lib::L2CValue::as_integer(aLStack208);
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
      fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar10,uVar8,uVar11);
      lib::L2CValue::L2CValue(aLStack192,fVar13);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0xcb4cf0e97);
      lib::L2CValue::L2CValue(aLStack224,0x1039fd27c1);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      uVar11 = lib::L2CValue::as_integer(aLStack224);
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
      fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar10,uVar8,uVar11);
      lib::L2CValue::L2CValue(aLStack208,fVar13);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      uVar14 = lib::L2CValue::as_number(aLStack176);
      uVar15 = lib::L2CValue::as_number(aLStack192);
      uVar3 = lib::L2CValue::as_number(aLStack208);
      local_50 = CONCAT44(uVar15,uVar14);
      uStack72 = (ulong)uVar3;
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
      app::lua_bind::LinkModule__set_constraint_rot_offset_impl(pBVar10,(Vector3f *)&local_50);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x15eea575ba);
  HVar12 = lib::L2CValue::as_hash((L2CValue *)&local_50);
  iVar2 = app::lua_bind::SoundModule__play_se_impl
                    (this->moduleAccessor,HVar12,true,false,false,false,0);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_AIR_LASSO_IMMIDIATE);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
  uVar8 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    fVar13 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack112,fVar13);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    uVar8 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    }
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
  lib::L2CValue::L2CValue(aLStack112,HIT_STATUS_OFF);
  pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  HVar4 = lib::L2CValue::as_integer(aLStack112);
  app::FighterSpecializer_Tantan::set_hit_status_arm(pBVar10,iVar2,HVar4);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack112,0x853922919);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_CLIFF_HANG_DATA_AIR_LASSO_HANG);
  lib::L2CValue::L2CValue(aLStack144,0x31d39a761);
  lua2cpp::L2CFighterCommon::status_AirLassoHang(this,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

