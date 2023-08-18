
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialN2Success_main(L2CFighterPickel *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  FighterPickelCraftWeaponKind FVar3;
  FighterPickelMaterialKind FVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  L2CValue *pLVar11;
  L2CValue *this_00;
  Fighter *pFVar12;
  BattleObjectModuleAccessor *pBVar13;
  Hash40 HVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  undefined auStack264 [32];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  iVar7 = _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM;
  if (0 < _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM) {
    iVar8 = 0;
    do {
      lib::L2CValue::L2CValue(aLStack168,iVar8);
      FUN_7100059490(aLStack152,this,aLStack168);
      lib::L2CValue::_L2CValue(aLStack168);
      lib::L2CValue::L2CValue(aLStack200,iVar8);
      FUN_71000596a0(aLStack184,this,aLStack200);
      lib::L2CValue::_L2CValue(aLStack200);
      lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_FAILURE);
      uVar10 = lib::L2CValue::operator__(aLStack152,aLStack136);
      lib::L2CValue::_L2CValue(aLStack136);
      if ((uVar10 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack232,iVar8);
        lib::L2CValue::L2CValue((L2CValue *)(auStack264 + 0x10),aLStack184);
        FUN_71000598b0(aLStack216,aLStack232,auStack264 + 0x10);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack264 + 0x10));
        lib::L2CValue::_L2CValue(aLStack232);
        lib::L2CValue::L2CValue((L2CValue *)auStack264,aLStack216);
        lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_REPAIR);
        uVar10 = lib::L2CValue::operator__(aLStack152,aLStack136);
        lib::L2CValue::_L2CValue(aLStack136);
        if ((uVar10 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack136,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack296,0x16f683c14f);
          uVar10 = lib::L2CValue::as_integer(aLStack136);
          pLVar11 = (L2CValue *)lib::L2CValue::as_integer(aLStack296);
          fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (this->moduleAccessor,uVar10,(ulong)pLVar11);
          lib::L2CValue::L2CValue(aLStack280,fVar16);
          lib::L2CValue::_L2CValue(aLStack296);
          lib::L2CValue::_L2CValue(aLStack136);
          this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
          lib::L2CValue::L2CValue(aLStack136,iVar8);
          pFVar12 = (Fighter *)lib::L2CValue::as_pointer(this_00);
          FVar3 = lib::L2CValue::as_integer(aLStack136);
          fVar16 = (float)app::FighterSpecializer_Pickel::get_craft_weapon_durability(pFVar12,FVar3)
          ;
          lib::L2CValue::L2CValue(aLStack296,fVar16);
          lib::L2CValue::_L2CValue(aLStack136);
          lib::L2CValue::operator_((L2CValue *)auStack264,aLStack280);
          lib::L2CValue::L2CValue(aLStack136,0.01);
          lib::L2CValue::operator_(aLStack344,aLStack136);
          lib::L2CValue::_L2CValue(aLStack136);
          lib::L2CValue::operator_(aLStack296,aLStack328);
          lib::L2CValue::operator_((L2CValue *)auStack264,aLStack312);
          lib::L2CValue::_L2CValue(aLStack312);
          lib::L2CValue::_L2CValue(aLStack328);
          lib::L2CValue::_L2CValue(aLStack344);
          lib::L2CAgent::math_min((L2CAgent *)auStack264,aLStack216,pLVar11);
          lib::L2CValue::operator_((L2CValue *)auStack264,aLStack136);
          lib::L2CValue::_L2CValue(aLStack136);
          lib::L2CValue::_L2CValue(aLStack296);
          lib::L2CValue::_L2CValue(aLStack280);
        }
        pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
        lib::L2CValue::L2CValue(aLStack136,iVar8);
        pFVar12 = (Fighter *)lib::L2CValue::as_pointer(pLVar11);
        FVar3 = lib::L2CValue::as_integer(aLStack136);
        FVar4 = lib::L2CValue::as_integer(aLStack184);
        fVar16 = (float)lib::L2CValue::as_number((L2CValue *)auStack264);
        app::FighterSpecializer_Pickel::set_craft_weapon_param(pFVar12,FVar3,FVar4,fVar16);
        lib::L2CValue::_L2CValue(aLStack136);
        lib::L2CValue::_L2CValue((L2CValue *)auStack264);
        lib::L2CValue::_L2CValue(aLStack216);
      }
      lib::L2CValue::_L2CValue(aLStack184);
      lib::L2CValue::_L2CValue(aLStack152);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar7);
  }
  iVar7 = _FIGHTER_PICKEL_MATERIAL_KIND_NUM;
  if (0 < _FIGHTER_PICKEL_MATERIAL_KIND_NUM) {
    iVar8 = 0;
    do {
      lib::L2CValue::L2CValue(aLStack152,iVar8);
      FUN_71000599c0(aLStack136,aLStack152);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack136);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::_L2CValue(aLStack152);
      if ((bVar1 & 1U) != 0) {
        pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
        lib::L2CValue::L2CValue(aLStack136,iVar8);
        lib::L2CValue::L2CValue(aLStack216,iVar8);
        FUN_7100059b10(aLStack184,this,aLStack216);
        pBVar13 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar11);
        iVar5 = lib::L2CValue::as_integer(aLStack136);
        iVar6 = lib::L2CValue::as_integer(aLStack184);
        app::FighterSpecializer_Pickel::sub_material_num(pBVar13,iVar5,iVar6);
        lib::L2CValue::_L2CValue(aLStack184);
        lib::L2CValue::_L2CValue(aLStack216);
        lib::L2CValue::_L2CValue(aLStack136);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar7);
  }
  lib::L2CValue::L2CValue(aLStack136,0xe35799e90);
  lib::L2CValue::L2CValue(aLStack152,0.0);
  lib::L2CValue::L2CValue(aLStack168,1.0);
  lib::L2CValue::L2CValue(aLStack184,false);
  HVar14 = lib::L2CValue::as_hash(aLStack136);
  fVar16 = (float)lib::L2CValue::as_number(aLStack152);
  fVar17 = (float)lib::L2CValue::as_number(aLStack168);
  bVar2 = lib::L2CValue::as_bool(aLStack184);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar14,fVar16,fVar17,(bool)(bVar2 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::L2CValue(aLStack152,true);
  FUN_7100058e90(aLStack136,this,aLStack152);
  lib::L2CValue::L2CValue
            (aLStack168,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_REQUEST_HAVE_CRAFT_WEAPON_KIND);
  iVar7 = lib::L2CValue::as_integer(aLStack136);
  iVar8 = lib::L2CValue::as_integer(aLStack168);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar7,iVar8);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue(aLStack168,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack184,0x1acf978c77);
  uVar10 = lib::L2CValue::as_integer(aLStack168);
  uVar15 = lib::L2CValue::as_integer(aLStack184);
  iVar7 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar10,uVar15);
  lib::L2CValue::L2CValue(aLStack136,iVar7);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::L2CValue(aLStack168,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_EFFECT_FRAME);
  iVar7 = lib::L2CValue::as_integer(aLStack136);
  iVar8 = lib::L2CValue::as_integer(aLStack168);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar7,iVar8);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::L2CValue(aLStack168,0xf899192aa);
  lua2cpp::L2CFighterCommon::sub_set_special_start_common_kinetic_setting(this,(L2CValue)0x58);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::L2CValue(aLStack200,0x20cbc92683);
  lib::L2CValue::L2CValue(aLStack216,1);
  lib::L2CValue::L2CValue(aLStack232,_FIGHTER_LOG_DATA_INT_ATTACK_NUM_KIND);
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack264 + 0x10),_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_02 + -1);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack200);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack216);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack232);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack264 + 0x10));
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack264 + 0x10));
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::L2CValue
            (aLStack216,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_GAUGE_SUCCESS_EFFECT_HANDLE);
  iVar7 = lib::L2CValue::as_integer(aLStack216);
  iVar7 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar7);
  lib::L2CValue::L2CValue(aLStack200,iVar7);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::L2CValue(aLStack216,1.0);
  uVar9 = lib::L2CValue::as_integer(aLStack200);
  fVar16 = (float)lib::L2CValue::as_number(aLStack216);
  app::lua_bind::EffectModule__set_rate_impl(this->moduleAccessor,uVar9,fVar16);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::L2CValue(aLStack216,SpecialN2Success_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x28);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack136);
  return;
}

