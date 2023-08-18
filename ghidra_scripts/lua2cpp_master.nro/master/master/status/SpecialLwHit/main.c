
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialLwHit_main(L2CFighterMaster *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Hash40 HVar5;
  float *pfVar6;
  L2CValue *this_00;
  Fighter *pFVar7;
  undefined4 uVar8;
  undefined4 uVar9;
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
  undefined8 local_60;
  undefined8 uStack88;
  
  lib::L2CValue::L2CValue(aLStack112,0xeb28cfd52);
  lib::L2CValue::L2CValue(aLStack128,0x12f0de089d);
  lib::L2CValue::L2CValue(aLStack144,false);
  lib::L2CValue::L2CValue(aLStack176,aLStack112);
  lib::L2CValue::L2CValue(aLStack192,aLStack128);
  lib::L2CValue::L2CValue(aLStack208,aLStack144);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack272,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack272,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x12f0de089d);
    iVar1 = lib::L2CValue::as_integer(aLStack272);
    HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_60);
    app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar1,HVar5,false,-1.0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack272,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xeb28cfd52);
    iVar1 = lib::L2CValue::as_integer(aLStack272);
    HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_60);
    app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar1,HVar5,false,-1.0);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_MASTER_AXE_STATUS_KIND_SPECIAL_LW_HIT);
  iVar1 = lib::L2CValue::as_integer(aLStack272);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::ArticleModule__change_status_exist_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_INSTANCE_WORK_ID_FLAG_NO_SPEED_OPERATION_CHK);
  iVar1 = lib::L2CValue::as_integer(aLStack272);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack272);
  app::lua_bind::KineticModule__clear_speed_all_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_INSTANCE_WORK_ID_FLAG_NO_SPEED_OPERATION_CHK);
  iVar1 = lib::L2CValue::as_integer(aLStack272);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
  iVar1 = lib::L2CValue::as_integer(aLStack272);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,FIGHTER_STATUS_KIND_CLIFF_CATCH._4_4_);
  iVar1 = lib::L2CValue::as_integer(aLStack272);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KINETIC_ENERGY_ID_JOSTLE);
  iVar1 = lib::L2CValue::as_integer(aLStack272);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar1 = lib::L2CValue::as_integer(aLStack272);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar1 = lib::L2CValue::as_integer(aLStack272);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  iVar1 = lib::L2CValue::as_integer(aLStack272);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,_EFFECT_HANDLE_NULL);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,
             _FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_LW_GROUND_EFFECT_HANDLE);
  iVar1 = lib::L2CValue::as_integer(aLStack272);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,_EFFECT_HANDLE_NULL);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,
             _FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_LW_IMPACT_EFFECT_HANDLE);
  iVar1 = lib::L2CValue::as_integer(aLStack272);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_LW_EFFECT_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack272);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack272);
  pfVar6 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack272,*pfVar6);
  lib::L2CValue::L2CValue(aLStack256,pfVar6[1]);
  lib::L2CValue::L2CValue(aLStack240,pfVar6[2]);
  FUN_7100005230(aLStack224,this,aLStack272);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
  uVar8 = lib::L2CValue::as_number(pLVar3);
  uVar9 = lib::L2CValue::as_number(this_00);
  local_60 = CONCAT44(uVar9,uVar8);
  uStack88 = 0;
  app::lua_bind::GroundModule__set_shape_safe_pos_impl(this->moduleAccessor,(Vector2f *)&local_60);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pFVar7 = (Fighter *)lib::L2CValue::as_pointer(pLVar3);
  app::FighterSpecializer_Master::stop_special_lw_hit_motion_rate(pFVar7);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,SpecialLwHit_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

